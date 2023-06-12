#include <stdio.h>

int main(){
    int age;
    printf("enter youe age\n");
    scanf("%d", &age);
    if(age>=90){
        printf("you are above 90, you cannot drive");
        
    }
    else{
        printf("you can drive");
    }

    return 0;

  
}
