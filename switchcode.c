#include <stdio.h>
int main (void)
{
    int a, b;
    char op;
    printf("enter two numbers and an operator:\n");
    scanf("%d %d %c",&a, &b, &op);
    switch (op)
     {
        case'+' :
          printf("reuslt:%d", a+b);
          break;
        case '-' :
          printf("result:%d",a-b);
          break;
        case'*' :
          printf("result:%d",a*b);
          break;
        case'/' :
          printf("result:%d",a/b);
          break;  
     }
     return 0;

}