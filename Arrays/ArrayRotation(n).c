#include<stdio.h>

int Lrotateone(int a[],int n)
{
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}

int Lrotate(int a[],int n,int k)
{
    for(int i=0;i<k;i++){
        Lrotateone(a,n);
    }
}

int PrintArray(int a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int main()
{
    int i,j,n,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position to rotate array:");
    scanf("%d",&k);
    PrintArray(a,n);
    printf("\n");
    Lrotate(a,n,k);
    printf("Array after  rotating %d position is...",k);
    printf("\n");
    PrintArray(a,n);
}
