#include<stdio.h>
int main()
{
    int a[2][2];
    int n=2;
    printf("Enter the Array Elements:");
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}
