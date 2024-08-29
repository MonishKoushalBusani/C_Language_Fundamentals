#include<stdio.h>

int main()
{
    int i,j,n1,n2;
    printf("Enter the size of First array:");
    scanf("%d",&n1);
    printf("Enter the size of Second array:");
    scanf("%d",&n2);
    int a[n1];
    printf("Enter the elements in First array:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int b[n2];
    printf("Enter the elements in Second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("%d\t",a[i]);
            }
        }
    }
}
