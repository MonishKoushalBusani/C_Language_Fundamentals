#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    printf("Enter String:");
    scanf("%s",&str);
    char r[15];
    strcpy(r, strrev(str));
    printf("\n%d\n",strcmp(str,r));
    return 0;
}
