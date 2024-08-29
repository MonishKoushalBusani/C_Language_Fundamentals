#include<stdio.h>

int main()
{
    int i,j,c,d;
    printf("Enter the dimention of Matrix:");
    scanf("%d",&c);
    scanf("%d",&d);
    int a[c][d];
    printf("Enter the elements in Matrix:");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Original Matrix is,");
    printf("\n");
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<d;j++){
            printf("%d",a[i][j]);
        }
    }
    int b[d][c];
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("\n");
    printf("The Resultant Matrix is,");
    printf("\n");
    for(i=0;i<d;i++){
        printf("\n");
        for(j=0;j<c;j++){
            printf("%d",b[i][j]);
        }
    }
}
