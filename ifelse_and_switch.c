#include <stdio.h>
int main(void)
{
    int a, b;
    printf("can you please enter two numbers:\n");
    scanf("%d %d",&a, &b);

  
    printf("can you please enter an operator:\n");
    char operator;
    scanf( " %c", &operator);

    if (operator == '*' )
    {
        printf("the result is:%d", a*b);
    }
    else if (operator=='+')
    {
        printf("the result is:%d", a+b);
    }
    else if (operator=='-')
    {
        printf("the result is:%d",a-b);
    }
    else if (operator=='/')
    {
        printf("the result is:%d", a/b);
    }
    return 0;
}