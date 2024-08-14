#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number:");
    scanf("%d",&m);
    int k=0,i;
    for(i=1;i<m;i++){
        if(m%i==0){
            k=k+1;
        }
    }
    if(k=1){
        printf("%d is prime",m);
    }
    else{
        printf("%d is not prime",m);
    }
}
