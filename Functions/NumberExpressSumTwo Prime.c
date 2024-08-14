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
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(isprime(i)){
            if(isprime(n-i)){
                printf("Yes\n");
                printf("%d and %d",i,n-i);
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
