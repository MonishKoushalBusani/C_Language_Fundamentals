#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("%d is big",a);
    }
    else if(b>a&&b>c){
        printf("%d is big",b);
    }
    else{
        printf("%d is large",c);
    }
    return 0;
}
