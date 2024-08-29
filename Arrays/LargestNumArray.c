#include<stdio.h>
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
    int max=0;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum Element:%d",max);
    return 0;
}
