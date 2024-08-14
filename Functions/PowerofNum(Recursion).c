#include<stdio.h>

int power(int x,int n)
{
    int val=1;
    for(int i=0;i<n;i++){
        val=val*x;
    }
    return val;
}


int main()
{
    int x,n;
    printf("Enter the Base and Exponent:");
    scanf("%d",&x);
    scanf("%d",&n);
    int pow=power(x,n);
    printf("%d",pow);
    return 0;
}
