#include <stdio.h>

enum magic {
	madoka,
	homura,
	mami
};

int main() {
	enum magic person = madoka;

	printf("%d is madoka\n", person);
	printf("%d is madoka\n", madoka);
	printf("%d is homura\n", homura);
	printf("%d is mami\n", mami);

	char secret[256];
	secret[0] = 'a';
	secret[1] = 'b';
	secret[2] = 'c';
	secret[255] = '\0';
	puts(secret);

	for (int i = 0; i < 256; i++) {
		putchar(secret[i]);
	}

	return 0;
}

