#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year==2000){
        printf("LeapYear");
    }
    else if(year%4==0 && year%100!=0){
        printf("LeapYear");
    }
    else{
        printf("Not a LeapYear");
    }
    return 0;
}
