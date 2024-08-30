#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][20] = {"apple", "banana", "cherry", "date", "elderberry"};
    int numStrings = 5;
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = 0; j < numStrings - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
