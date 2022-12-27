#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a;
    int b;
    printf("First number: ");
    scanf("%d", &a);
    printf("second number: ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("sum of first number and second number is: %d", s);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
