#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=4;
    printf("a:%d b:%d\n",a,b);
    int t;
    t=a;
    a=b;
    b=t;
    printf("a:%d b:%d",a,b);
}
