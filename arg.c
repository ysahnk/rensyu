#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc + 10; i++)
		printf("argv[%d] is %s\n", i, argv[i]);

	return 0;
}
