#include<stdio.h>
#include <string.h>

int main() {
   char string[50];
   printf("Enter the character:");
   scanf("%[^\n]s",string);
   char * token = strtok(string," ");
   while( token != NULL ) {
      printf( "%s\n", token );
      token = strtok(NULL," ");
   }
   return 0;
}
