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
    int b[e][f];
    printf("Enter the elements in Second Matrix:");
    for(i=0;i<e;i++){
        for(j=0;j<f;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int count=0;
    if(c!=e||d!=f){
        printf("Matrices are not equal\n");
    }
    else{
        for(i=0;i<c;i++){
            for(j=0;j<e;j++){
                if(a[i][j]!=b[i][j]){
                    count+=1;
                }
            }
        }
        if(count>0){
            printf("Matrices are not equal");
        }
        else{
            printf("Matrices are equal");
        }
    }
    return 0;
}
