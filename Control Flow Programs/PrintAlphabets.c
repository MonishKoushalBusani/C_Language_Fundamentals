#include<stdio.h>
int main()
{
    char c;
    printf("Capital Letters\n");
    for(c='A';c<='Z';c++){
        printf("%c\n",c);
    }
    printf("\n");
    printf("Small Letters\n");
    for(c='a';c<='z';c++){
        printf("%c\n",c);
    }
    return 0;
}
