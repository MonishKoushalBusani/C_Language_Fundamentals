#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter the first string:");
	scanf("%s",&str1);
	printf("Enter the second string:");
	scanf("%s",&str2);
	int k=strcmp(str1,str2);
	if(k>0){
        printf("String 1 is greater than String 2");
	}
	else if(k<0){
        printf("String 1 is less than String 2");
	}
	else{
        printf("String 1 and String 2 are the same");
	}
	return 0;
}
