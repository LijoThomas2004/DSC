#include<stdio.h>
void main(){
int i,x,n,y,mid,flag=0,left=0;
printf("Enter the number of array=");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
  printf("Enter the number=");
  scanf("%d",&x);
}
printf("Enter the number to search=");
scanf("%d",&i);
int right=n-1;
while(left<=right){
  mid=(left+right)/2;
  if(y==a[mid]){   
   flag=1;
   break;
  }
  else if(y>a[mid]){
    left=mid+1;
  }
  else{
    right=mid-1;
  }
}
if(flag==1){
  printf("Element is found");
}  
else{
  printf("Element is not found");
}
}




