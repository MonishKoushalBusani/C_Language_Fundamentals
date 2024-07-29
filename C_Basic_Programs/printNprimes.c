#include<stdio.h>
#include<stdbool.h>

bool isprime(int n)
{
    if(n==0||n==1){
        return false;
    }
    int k;
    for(k=2;k<n;k++){
        if(n%k==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        if(isprime(i)){
            printf("%d\n",i);
        }
    }
}
