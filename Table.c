#include<stdio.h>

int main(){
    int num;
    printf(" Enter Number for find Table: ");
    scanf("%d", &num);
    for(int i= 1; i<=10;i++){
        printf("%d \n",i);
        break;
        printf("%d \n", i*num);
    }
    return 0;
}