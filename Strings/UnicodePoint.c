#include <stdio.h>

int main()
{
    char arr[50];
    printf("Enter the character:");
    scanf("%[^\n]s",arr);
    int code;
    printf("The String is %s\n",arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        code = arr[i];
        printf("The Unicode Code Point At %d is:%d\n",i, code);
    }
    return 0;
}

