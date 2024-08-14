#include<stdio.h>

int GetFact(int n)
{
    if(n<=1){
        return 1;
    }
    if(n>1){
        return n*GetFact(n-1);
    }
}

int main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Factorial=%d",GetFact(n));
    return 0;
}
