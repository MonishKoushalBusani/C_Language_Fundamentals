#include<stdio.h>
#include<math.h>

int max(int a[],int n)
{
    int i,max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int min(int a[],int n)
{
    int i,min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m1=max(a,n);
    int m2=min(a,n);
    printf("Maximum and Minimum are %d,%d",m1,m2);
    return 0;
}
