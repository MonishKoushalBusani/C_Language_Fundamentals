#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15],str2[15];
    printf("Enter first String:");
    scanf("%s",&str1);
    printf("Enter second String:");
    scanf("%s",&str2);
    printf("The string after Concatenation is:%s",strcat(str1,str2));
    return 0;
}
