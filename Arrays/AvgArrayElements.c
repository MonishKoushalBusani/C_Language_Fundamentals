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
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    float avg=(float)sum/(float)n;
    printf("Average of elements in array is %f",avg);
    return 0;
}
