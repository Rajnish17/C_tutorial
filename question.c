#include<stdio.h>
int main(){
    int num;
    printf("Enter thu number to find the sum: ");
    scanf("%d",&num);
     int sum= 0;
        
        
    for ( int i = 1; i<=num; i++)
    {
     sum =sum+i;  
    }
    printf("%d",sum);
    return 0;
}