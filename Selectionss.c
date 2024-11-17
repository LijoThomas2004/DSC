#include<stdio.h>
    void swap(int *x, int *y) {
          int temp = *x;
          *x = *y;
         *y = temp;
}
   void main(){
    int i,min,j,n,a[50];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }

    if(min !=i){
        swap(&a[i],&a[min]);
    }
   }
    printf("the sorted elements are=");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
   }

}
