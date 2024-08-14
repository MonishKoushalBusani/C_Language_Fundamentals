#include<stdio.h>
#include<stdbool.h>

bool isprime(int n){
    int k=0,j;
    for(j=1;j<n;j++){
        if(n%j==0){
            k=k+1;
        }
    }
    if(k==1){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    if(isprime(n)){
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
    return 0;
}
