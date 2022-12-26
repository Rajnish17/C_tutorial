#include <stdio.h>

int main()
{
    int input;
    printf("Enter age:  ");
    scanf("%d",&input);
    if (input >= 20){
        printf("you are an adult \n");
    }else if(input >=10 && input <= 19){
        printf("you are a teenager \n");
    }else{
        printf("you are a child \n");
    }

    printf("Thank you for using our service");
    return 0;
}