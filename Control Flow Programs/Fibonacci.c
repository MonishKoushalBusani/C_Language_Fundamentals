#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    printf("Enter the number:");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n%d\n",a,b);
    for(i=0;i<n-2;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
