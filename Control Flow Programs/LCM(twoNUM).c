#include<stdio.h>
int main()
{
    int max,a,b,fact=1;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    max = (a > b) ? a : b;
    while(fact){
        if(max%a==0 && max%b==0){
            printf("LCM of two numbers is:%d",max);
            fact=0;
        }max++;
    }
    return 0;
}
