#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    int fib[2*n+1];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=2*n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int sum=0;
    for(i=0;i<=2*n;i++){
        if(i%2==0){
            sum=sum+fib[i];
        }
    }
    printf("%d is sum of even indexes",sum);
}
