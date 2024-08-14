#include<stdio.h>

int GetSum(int n)
{
    if(n<=1){
        return n;
    }
    if(n>1){
        return n+GetSum(n-1);
    }
}

int main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    printf("sum=%d",GetSum(n));
    return 0;
}
