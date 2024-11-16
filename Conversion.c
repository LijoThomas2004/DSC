#include <stdio.h>
#include <ctype.h>  // For isalnum()

char stack[20];
int top = -1;

// Function to push an element onto the stack
void push(char x) {
    stack[++top] = x;
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
        return -1;  // Return -1 if stack is empty
    } else {
        return stack[top--];
    }
}

// Function to get the priority of operators
int priority(char x) {
    if (x == '(') {
        return 0;
    }
    if (x == '+' || x == '-') {
        return 1;
    }
    if (x == '*' || x == '/') {
        return 2;
    }
    return -1;  // For other characters, return an invalid priority
}

int main() {
    char exp[20];
    char *e, x;

    printf("Enter the expression :: ");
    scanf("%s", exp);  // Reading the input expression

    e = exp;  // Pointer to iterate through the expression

    // Iterate through the expression
    while (*e != '\0') {
        if (isalnum(*e)) {
            // If the character is an operand, print it (postfix expression)
            printf("%c", *e);
        } else if (*e == '(') {
            // If the character is '(', push it onto the stack
            push(*e);
        } else if (*e == ')') {
            // If the character is ')', pop and print until '(' is encountered
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        } else {
            // For operators, pop from the stack until we find an operator with lower priority
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            // Push the current operator onto the stack
            push(*e);
        }
        e++;  // Move to the next character in the expression
    }

    // Pop and print any remaining operators from the stack
    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}
