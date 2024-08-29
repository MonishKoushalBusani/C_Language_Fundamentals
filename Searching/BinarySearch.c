#include<stdio.h>

int sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int Bsearch(int a[],int k,int n,int low,int high)
{
    int mid;
    mid=(low+high)/2;
    if(k==a[mid]){
        return mid;
    }
    else if(k<a[mid]){
        high=mid-1;
    }
    else if(k>a[mid]){
        low=mid+1;
    }
    else{
        return 0;
    }
}


int main()
{
    int i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],k;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Enter element to search:");
    scanf("%d",&k);
    int m=Bsearch(a,k,n,0,n-1);
    if(k!=0){
        printf("Element is found at %d",m);
    }
    else{
        printf("Element is not found");
    }

    return 0;
}
