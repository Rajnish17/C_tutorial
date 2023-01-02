#include<stdio.h>
void checheven(int a);

 int main(){
    int a;
    printf("Enter number to fin odd or even: ");
    scanf("%d",&a);
    checheven(a);
    return 0;
};

void checheven( int a){
    if(a % 2 == 0){
  printf("NUmber is even");
    }else{
        printf("Number is odd");
    }
}