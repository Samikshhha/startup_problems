#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int marks[10]={10,20,30,40,50,60,70,80,90,100};
    printf("enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}
