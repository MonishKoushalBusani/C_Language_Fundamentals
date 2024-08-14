#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int square=n*n;
    int temp=square;
    int sum=0;
    while(temp>0){
        sum=sum+temp%10;
        temp=temp/10;
    }
    if(n==sum){
        printf("%d is a Neon Number",n);
    }
    else{
        printf("%d is not a Neon Number",n);
    }
}
