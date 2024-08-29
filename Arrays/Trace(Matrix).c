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
    int trace=0;
    for(i=0;i<c;i++){
        trace=trace+a[i][i];
    }
    printf("Trace of matrix is %d",trace);
    return 0;
}
