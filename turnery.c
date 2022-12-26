#include <stdio.h>

int main(){

    int age;
    printf("enter age ");
    
    scanf("%d",&age);
    age >=18 ? printf("you are adult \n") : printf("you are not adult \n");
    return 0;
}