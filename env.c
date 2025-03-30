#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
	for(int i = 0; i < 100; i++) {
		if(environ[i] == NULL) {
			puts("it is over");
			return 0;
		}
		puts(environ[i]);

	}

	return 0;
}

