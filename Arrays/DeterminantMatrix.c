#include<stdio.h>

int main()
{
    int i,j,c,d;
    c=3;
    d=3;
    int a[c][d];
    printf("Enter the elements in Matrix:");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<d;j++){
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    int det = 0;
    for (i = 0; i < 3; i++) {
        det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
    }
    printf("\nThe Determinant of the matrix is: %d\n\n", det);

    return 0;
}
