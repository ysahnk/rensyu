#include <stdio.h>

// test line 1

// test line 2
int main(int argc, char *argv[]) {
	for (int i = 0; i < argc + 10; i++)
		printf("argv[%d] is %s\n", i, argv[i]);

	return 0;
}
// test line 3
