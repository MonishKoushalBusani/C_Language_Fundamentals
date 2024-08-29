#include<stdio.h>

int main()
{
    int i,n1,n2;
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
    int n3=n1+n2;
    int c[n3];
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    int j;
    for(i=0,j=n1;j<n3&&i<n2;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<n3;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}


