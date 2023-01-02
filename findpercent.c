#include<stdio.h>
int percent(int math ,int english, int hindi);
int main(){
    int math=50;
    int english =65;
    int hindi =75;
printf("%d",percent(math ,english,hindi));


  return 0;
}


int percent(int math ,int english, int hindi){

    int total = ((math+english+hindi)/3);

return total;

}