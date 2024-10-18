#include <stdio.h>
void main()
{
    int i, x, n, flag = 1,temp,time=0,space=0;
    time +=4;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers:"); 
    time +=3;
    for (i = 0; i < n; i++)
    {   
       scanf("%d", &a[i]);
       time +=2;
    }
    time++;
    printf("Enter the number to search:");
    scanf("%d", &x);
    time +=2;
    for(i=0;i<n;i++)
    {
        time++;
       if(a[i]==x) 
       {
          flag=0;
          break;
          time +=2;

       }
    }
    time++;
    if(flag==0)
    {
        printf("Element is %d found at a[%d]\n",x,i);
        time +=2;
    }
    else
    {
        printf("Element is not found");
         time +=2;
    }
    time +=2;
   space=(7*4)+(4*n);
   printf("\nSpace complexity = %d\nTime complexity = %d\n",space,time); 
}        
