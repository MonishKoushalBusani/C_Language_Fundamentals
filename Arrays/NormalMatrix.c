#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,c,d,k;
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
    int Normal = 0;
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
           Normal+=a[i][j]*a[i][j];
        }
    }
    k=sqrt(Normal);
    printf("\nNormal:%d",k);
    return 0;
}
