#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,temp;
    printf("Enter number:");
    scanf("%d",&n);
    k=(int)log10(n)+1;
    float sum=0;
    temp=n;
    while(temp>0){
        int digit=temp%10;
        sum+=pow(digit,k);
        temp=temp/10;
    }
    if(n==(int)sum){
        printf("%d is armstrong",n);
    }
    else{
        printf("%d is not armstrong",n);
    }
    return 0;
}
