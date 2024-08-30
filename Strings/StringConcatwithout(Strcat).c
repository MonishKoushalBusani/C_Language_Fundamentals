 #include <stdio.h>

void concatenateStrings(char* str1, const char* str2)
{
	while (*str1) {
		++str1;
	}

	while (*str2) {
		*str1++ = *str2++;
	}

    *str1 = '\0';
}

int main()
{
	char str1[50] = "Hello, ";
	char str2[] = "Geek!";

	concatenateStrings(str1, str2);

	printf("Concatenated String: %s\n", str1);

	return 0;
}

