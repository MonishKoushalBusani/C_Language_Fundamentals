#include<stdio.h>

int SortDes(int a[],int n)
{
    for(int i=0;i<n;i++){
        int max=i;
        int j;
        for(j=i+1;j<n;j++){
            if(a[j]>a[max]){
                max=j;
            }
        }
        int temp=a[max];
        a[max]=a[i];
        a[i]=temp;
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
    SortDes(a,n);
    printf("Array after sorting is \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

