#include<stdio.h>

int main()
{
    int i,j,c,d,e,f;
    printf("Enter the dimention of First Matrix:");
    scanf("%d",&c);
    scanf("%d",&d);
    printf("Enter the dimention of Second array:");
    scanf("%d",&e);
    scanf("%d",&f);
    int a[c][d];
    printf("Enter the elements in First Matrix:");
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
    int b[e][f];
    printf("\n\n");
    printf("Enter the elements in Second Matrix:");
    for(i=0;i<e;i++){
        for(j=0;j<f;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<e;i++){
        printf("\n");
        for(j=0;j<f;j++){
            printf("%d\t",b[i][j]);
        }
    }
    int A[c][d];
    if(c!=e||d!=f){
        printf("\nMatrix Addition not possible");
    }
    else{
        for(i=0;i<c;i++){
            for(j=0;j<d;j++){
                A[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\nThe Matrix after Addition is:\n");
        printf("\n");
        for(i=0;i<c;i++){
            printf("\n");
            for(j=0;j<d;j++){
                printf("%d\t",A[i][j]);
            }
        }
    }

    return 0;
}
