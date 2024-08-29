#include<stdio.h>

int Lsearch(int a[],int n,int k)
{
    int i,j;
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){
            count=i+1;
        }
    }
    return count;
}


int main()
{
    int i,j,n,p;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],k;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Element to Search:");
    scanf("%d",&k);
    p=Lsearch(a,n,k);
    if(p!=0){
        printf("Element is found at %d position\n",p);
    }
    else{
        printf("Element is not found");
    }
    return 0;
}
