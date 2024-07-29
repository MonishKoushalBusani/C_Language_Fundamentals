#include<stdio.h>
int main()
{
    char x[25];
    printf("Enter your name:");
    fgets(x,25,stdin);
    printf("Your name is: %s",x);
    return 0;
}
