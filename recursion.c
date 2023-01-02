#include<stdio.h>
int factorial(int n);

int main(){
    printf("%d",factorial(5));

return 0;

}


int factorial(int n){
    if(n == 1){
        return 1;
    }
    int factn1 =factorial(n-1);
    int factn =factn1 *n;
    return factn;
}