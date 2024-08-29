#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    printf("Elements after copying in another array are..\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}
