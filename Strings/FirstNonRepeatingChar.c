#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int firstUniqChar(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        bool found = true;
        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s[20];
    printf("Enter the string:");
    scanf("%s",&s);
    int k=firstUniqChar(s);
    if(k==-1){
        printf("There is no non-repeating character in string");
    }
    else{
        printf("The first non-repeating character is:%c",s[k]);
    }
    return 0;
}

