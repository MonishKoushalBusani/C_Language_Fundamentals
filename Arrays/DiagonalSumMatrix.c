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
    int trace=0;
    for(i=0;i<c;i++){
        trace=trace+a[i][i];
    }
    printf("\nMain Diagonal Sum of matrix is %d\n",trace);
    d=0;
    for(i=0;i<c;i++){
        d=d+a[i][c-i-1];
    }
    printf("\nOff-Diagonal Sum of matrix is %d\n",d);
    return 0;
}

