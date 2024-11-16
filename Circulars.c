#include<stdio.h>
int i,n,front=-1,rear=-1,A[20],n,opt,item;
void enqueue();
 void dequeue();
 void display();
 void main(){
    printf("Enter the size of array:");
    scanf("%d",&n);
    while(opt!=4){
        printf("\n1:Enqueue");
        printf("\n2:Dequeue");
        printf("\n3:Display");
        printf("\n4:Exit");
        printf("\nEnter an choice\n");
        scanf("%d",&opt);
        switch(opt){
            case 1:
             enqueue();
             break;
            case 2:
             dequeue();
             break;
            case 3:
             display();
             break;
            case 4:
             printf("Exicted\n");
             break;
            default:
             printf("Enter a valid option");
        }
    }
 }
 void enqueue(){
    if(front==(rear+1)%n){
        printf("Overflow");
    }
    else{
        printf("Enter the element to add");
        scanf("%d",&item);
        if(front==-1){
            front=0;
        }
         rear=(rear+1)%n;
        A[rear]=item;
      
    }
 } 
 void dequeue() {
    if (front == -1) {  
        printf("Underflow\n");
    } else {
        item = A[front];  
        printf("The deleted element is: %d\n", item);
        if (front == rear) {  
            front = rear = -1;  
        } else {
            front = (front + 1) % n;  
        }
    }
}
 void display(){
    if(front==-1||rear==-1){
    printf("empty");
 }
 else{
    printf("The circular queue is:");
    for(i=front;i<=rear;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
 }
 }

