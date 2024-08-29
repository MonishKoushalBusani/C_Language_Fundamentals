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
    printf("\n");
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<d;j++){
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nBoundary of Matrix \n");
    for (int i = 0; i < c; i++){
        for (int j = 0; j < d; j++){
            if (i == 0 || j == 0 || i == c - 1|| j == d - 1){
                printf("%d", a[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
