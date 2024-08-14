#include<stdio.h>
#include<math.h>

int FindRoots(int a,int b,int c)
{
    if(a==0){
        printf("Invalid");
        return;
    }
    int d=(b*b)-(4*a*c);
    double sqrt_val=sqrt(abs(d));
    if(d<0){
        printf("Roots are imaginary\n");
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),sqrt_val / (2 * a), -(double)b / (2 * a), sqrt_val / (2 * a));
    }
    if(d==0){
        printf("Roots are equal\n");
        printf("%f", -(double)b / (2 * a));
    }
    if(d>0){
        printf("Roots are real\n");
        printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),(double)(-b - sqrt_val) / (2 * a));
    }
}


int main()
{
    int a,b,c;
    printf("Enter the co-efficients a,b,c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    FindRoots(a,b,c);
    return 0;
}
