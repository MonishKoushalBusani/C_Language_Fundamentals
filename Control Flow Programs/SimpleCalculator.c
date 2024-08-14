#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;
    printf("Enter the values of a and b:");
    scanf("%f%f",&a,&b);
    while(1){
            char ch;
            printf("Enter the operation (+,-,*,/)\n");
            printf("Enter X to exit....\n");
            scanf("%c",&ch);
            if(ch=='X'){
                exit(0);}
        switch(ch){
        case '+':printf("The sum of %f and %f is %f\n",a,b,a+b);
                 break;
        case '-':printf("The subtraction of %f and %f is %f\n",a,b,a-b);
                 break;
        case '*':printf("The product of %f and %f is %f\n",a,b,a*b);
                 break;
        case '/':printf("The division of %f and %f is %f\n",a,b,a/b);
                 break;
        }
    }
    return 0;
}
