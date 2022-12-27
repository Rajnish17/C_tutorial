#include<stdio.h>

void hello(); //=> function declaration prototype
void goodby();
void namaste();
void bonjour();

int main(){
hello(); // function call
 goodby();

 char ch;
 printf("Enter your nationality: ");
 scanf("%c",&ch);
 if(ch =='i'){
    namaste();
 }else if(ch =='f'){
    bonjour();
 }else{
    printf("You are not an indian nor a french");
 }
    return 0;
}
// function defination
void hello(){
    printf("hello world function \n");
    
};
void goodby(){
    printf("good by \n");
    
};
void namaste(){
printf("Namaste \n");

}
void bonjour(){
printf("Bonjour \n");

}