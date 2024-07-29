#include<stdio.h>
int main()
{
    float p,r,n;
    p=10000.00;
    r=5.00;
    n=2.00;
    float ci;
    ci=p*(pow((1+(r/100)),n));
    ci=ci-p;
    printf("compound interest: %f",ci);
}
