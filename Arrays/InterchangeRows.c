#include<stdio.h>

int main()
{
    int i,j,c,d;
    printf("Enter the dimention of Matrix:");
    scanf("%d",&c);
    int a[c][c];
    printf("Enter the elements in Matrix:");
    for(i=0;i<c;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    int rows=c;
    for (int i = 0; i < c; i++)
    {
        int t = a[0][i];
        a[0][i] = a[rows - 1][i];
        a[rows - 1][i] = t;
    }
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    return 0;
}
