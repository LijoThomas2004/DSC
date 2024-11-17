#include<stdio.h>
void merge(int a[],int low,int high,int mid,int b[]){
    int i=low,j=mid+1,k=low;

while(i<=mid && j<=high){
    if(a[i]<=a[j]){
        b[k]=a[i];
        i++;
    }
    else{
        b[k]=a[j];
        j++;
        
    }
    k++;
}
   while(i<=mid){
    b[k]=a[i];
        i++;
        k++;
   }
     while(j<=high){
        b[k]=a[j];
        j++;
        k++;
     }
    for(i=low;i<=high;i++){
        a[i]=b[i];
    }
}

void mergesort(int a[],int low,int high,int b[]){
    if(low<high){
       int mid=(low+high)/2;
        mergesort(a,low,mid,b);
        mergesort(a,mid+1,high,b);
        merge(a,low,high,mid,b);
    }
}
void main(){
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n], b[n];
    printf("Enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     mergesort(a, 0, n - 1, b);
    printf("the sorted elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}


