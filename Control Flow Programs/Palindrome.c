#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(n==rev){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
}
