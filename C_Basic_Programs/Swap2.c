#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=4;
    printf("a:%d b:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a:%d b:%d",a,b);
}
