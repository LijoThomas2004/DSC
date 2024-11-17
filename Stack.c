#include<stdio.h>
int top=-1,opt=-1,max,n,value,A[20],i,choice;
void push();
void pop();
void display();
void main(){
    printf("Enter the size of the array:");
    scanf("%d",&max);
    while(opt!=4){
        printf("1:Push\n");
        printf("2: Pop\n");
        printf("3: Display\n");
        printf("4:Exict\n");
        printf("choose an option:");
        scanf("%d",&opt);
        switch(opt)
         {
            case 1:push();
                  break;
            case 2:pop();
                   break;
            case 3:display();
                  break;
            case 4:printf("Exited");
                  break;
            default:printf("invalid choice");
        }
    }
}
void push (){
    if(top==max-1){
        printf("Stack overflow");
    }
    else{
        printf("enter the number to add:");
        scanf("%d",&n);
        top++;
        A[top]=n;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        value=A[top];
        printf("the deleted element is:%d\n",value);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("empty");
    }
    else{
    printf("the stack is:");
    for(i=max-1;i>=0;i--){
        printf("%d\t ",A[i]);
    }
    printf("\n");
}
}

            
        


    

