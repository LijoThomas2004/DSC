#include<stdio.h>
void main(){
    int i,j,n,a[50],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++){
        temp=a[i];
        j=i-1;
    while(j>=0&&a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
     a[j+1]=temp;
    }
    printf("the sorted elements are:\n");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
}

