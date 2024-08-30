#include <stdio.h>
#include<string.h>

void reverse(char str[],int s,int l)
{
    if(s>=l){
        return;
    }
    char t=str[s];
    str[s]=str[l];
    str[l]=t;
    reverse(str,s+1,l-1);
}

int main()
{
    char str[20];
    printf("Enter the string:");
    scanf("%s",&str);
    int n=strlen(str);
    reverse(str,0,n-1);
    printf("Reversed string: %s\n",str);
    return 0;
}
