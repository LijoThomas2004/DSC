#include<stdio.h>
int i,front=-1,rear=-1,n,A[20],item,opt;
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
              printf("Enter the valid option");
        }
    }
 }
 void enqueue(){
    if(rear==n-1){
        printf("Queue overflow");
    }
    else{
        printf("Enter the number to add:");
        scanf("%d",&n);
        if(front==-1){
            front=0;
        }
        rear++;
        A[rear]=n;
    }
 }
    void dequeue(){
        if(front==-1||front>rear){
        printf("queue is underflow");
    }
    else{
        printf("the deleted number is:%d\n",A[front]);
        front++;
        if(front>rear){
            front=rear-1;
        }
    }
    }
    void display(){
        if(front==-1){
            printf("queue is empty");
        }
        else{
        printf("Queue is:  ");
        for(i=front;i<=rear;i++){
            printf("%d\t",A[i]);
        }
        printf("\n");
    }
    }
    

 


 


              
         
             