#include <stdio.h>

int main(){
    int age;
    
    printf ("enter your age\n");
    scanf("%d", &age);
    
    if (age <= 70 && age>=18)
    {
        printf("yoe are above 18 and below 70, you can derive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    return 0;
}
