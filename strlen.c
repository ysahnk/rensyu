#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *str;
	if (argc == 2) {
		str = argv[1];
	} else {
		str = "placeholder";
	}
	printf("the length of argv[1] == %s is %d\n", str, strlen(str));
	// test line

	return 0;
}
