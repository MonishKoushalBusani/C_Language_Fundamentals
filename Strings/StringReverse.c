#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    printf("Enter String:");
    scanf("%s",&str);
    printf("%s",strrev(str));
    return 0;
}
