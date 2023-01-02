#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter N Natural Number");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
      sum =sum+i;
    }
    printf("%d",sum);
    

}