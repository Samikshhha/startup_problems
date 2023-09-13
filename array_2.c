#include <stdio.h>

int main()
{
    int arr[10],i,min;
    printf("enter 10 elements in array\n");
    for(i=0;i<=9;i++);
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<=9;i++)
    {
        if(arr[i]<min)
        {
         min=arr[i];   
        }
}
printf("minimum no=%d\n",min);

    return 0;
}
