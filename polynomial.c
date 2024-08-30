#include<stdio.h>
struct polynomial{
int coeff;
int expo;
}poly[100];
void main(){
 int i,n;  
printf("Enter the number in terms polynomial:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the coefficent and exponent of term %d:",i+1);
scanf("%d%d",&poly[i].coeff,&poly[i].expo);
}
printf("The polynomial is:");
for(i=0;i<n;i++){
printf("(%dx^%d)",poly[i].coeff,poly[i].expo);
if(i<n-1){
printf("+");
}
}
printf("\n");
}   