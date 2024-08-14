#include<stdio.h>
#include<math.h>

int fib(int n){
    int k=(int)log10(n)+1;
    float sum=0;
    int temp=n;
    while(temp>0){
        int digit=temp%10;
        sum+=pow(digit,k);
        temp=temp/10;
    }
    if(n==(int)sum){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int a,b;
    printf("Enter intervals:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");
    for(int i=a;i<b+1;i++){
        if(fib(i)==1){
            printf("%d\n",i);
        }
    }
    return 0;
}

