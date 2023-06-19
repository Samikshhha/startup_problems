#include <stdio.h>

int main(){
    int rating;
    printf("enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch(rating){
        case 1:
         printf("your rating is 1");
        
        case 2:
         printf("your rating is 2");
        
        case 3:
         printf("your rating is 3");
         
         case 4:
         printf("your rating is 4");
         
         case 5:
         printf("your rating is 5");
         
         default:
         printf("invalid rating");
         
    }
