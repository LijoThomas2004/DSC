#include<stdio.h>
void main(){
    int i,j,temp,n,a[50];
    printf("Enter the size of array:");
    scanf("%d",&n);
      printf("Enter the numbers:");
      for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
      for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
      }
      printf("the sorted elements are=\n");
      for(i=0;i<n;i++){
        printf("%d\t",a[i]);
      }
      printf("\n");
}























