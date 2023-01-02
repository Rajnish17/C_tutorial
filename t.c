#include<stdio.h>
void printsum(int a, int b);

int main(){
    int a;
    int b;
   printsum(a,b);
};

void printsum(int a, int b){
    
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int sum = a+b;
    printf("%d",sum);
}