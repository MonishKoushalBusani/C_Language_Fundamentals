#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The factors are...");
    printf("\n");
    for(int i=1;i<n+1;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
}
