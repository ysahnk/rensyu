#include <stdio.h>
#include <string.h>

void removedup(char *str) {
	int stkptr = -1;
	int i = 0;
	int len = strlen(str);

	while (i < len) {
		if (stkptr == -1 || str[stkptr] != str[i]) {
			stkptr++;
			str[stkptr] = str[i];
			i++;
		} else {
			while (i < len && str[stkptr] == str[i]) {
				i++;
			}
			stkptr--;
		}
	}
	str[stkptr + 1] = '\0';
}

int main() {
	char a[] = "careermonk";
	removedup(a);
	puts(a);

	char b[] = "axyyyyyyyyyyyyyyyyyxz";
	removedup(b);
	puts(b);
}
