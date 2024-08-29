#include<stdio.h>

int Rowvisesorting(int m[4][4],int r,int c)
{
    int t = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < c - j - 1; k++) {
                if (m[i][k] > m[i][k + 1]) {
                    t = m[i][k];
                    m[i][k] = m[i][k + 1];
                    m[i][k + 1] = t;
                }
            }
        }
    }
}


int main()
{
    int a[4][4];
    int n=4;
    printf("Enter the Array Elements:");
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    i=4;
    j=4;
    Rowvisesorting(a,i,j);
    printf("The Array after Row-vise Sorting Elements:");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}

