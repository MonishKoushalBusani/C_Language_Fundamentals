#include<stdio.h>
#include<stdbool.h>

bool prime(int n){
    int k=0,j;
    for(j=1;j<n;j++){
        if(n%j==0){
            k=k+1;
        }
    }
    if(k==1){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a,b,i;
    printf("Enter intervals:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");
    for(int i=a+1;i<b;i++){
        if(prime(i)==true){
            printf("%d\n",i);
        }
    }
    return 0;
}
