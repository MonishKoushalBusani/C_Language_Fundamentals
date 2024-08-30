#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    printf("Enter String:");
    scanf("%s",&str);
    int n=strlen(str);
    printf("\nThe length of string:%d\n",n);
    return 0;
}
