#include<stdio.h>
int main()
{
    float c;
    float f;
    printf("Enter the temperature in celsius:");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("The temperature in Fahrenheit is %f",f);
}
