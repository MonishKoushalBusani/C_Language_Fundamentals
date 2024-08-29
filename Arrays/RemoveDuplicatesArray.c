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
    int k;
    for(i=0;i<n;i++){
        for(j = i+1; j < n; j++){
            if(a[i] == a[j]){
                for(k = j; k <n; k++){
                    a[k] = a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("Elements after removing duplicates in array are..\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

