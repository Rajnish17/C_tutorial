#include<stdio.h>
int main(){
    char CH;
    printf("Enter CHaracter : ");
    scanf("%c",&CH);

    if(CH >='A' && CH <= 'Z'){
        printf("Upper case \n");
    }else if(CH >='a' && CH <= 'z'){
        printf("lower case \n");
    }else{
        printf("NOT a english CHaracter");
    }
    return 0;
}