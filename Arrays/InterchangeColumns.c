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
    int columns=c;
    int rows=c;
    for (int i = 0; i < c; i++)
    {
        int t = a[i][0];
        a[i][0] = a[i][columns-1];
        a[i][columns-1] = t;
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
