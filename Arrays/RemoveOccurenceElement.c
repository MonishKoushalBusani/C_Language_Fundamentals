#include<stdio.h>

int RemoveOccurence(int a[],int k,int n)
{
    int i,j,b[n];
    for(i=0;i<n;i++){
        if(a[i]!=k){
            printf("%d\t",a[i]);
        }
    }
}

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
    int k;
    printf("Enter the element to remove it's occurence:");
    scanf("%d",&k);
    printf("Array after removing it's occurence is \n");
    RemoveOccurence(a,k,n);
    return 0;
}


