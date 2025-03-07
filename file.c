#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	FILE *fp;
//	int c;
//
//	if (fp = fopen("../hello.txt", "r")) {
//		while((c = fgetc(fp)) != EOF) {
//			putchar(c);
//		}
//		int r = fclose(fp);
//		printf("fclose() returns %d\n", r);
//	} else {
//		printf("file open failed\n");
//	}

	char buffer[24];

	if (fp = fopen("example.txt", "r+")) {
		while (true) {
			fgets(buffer, 24, stdin);
			if (strcmp(buffer, "end\n") == 0) break; 
			fputs(buffer, fp);
			//buffer[strlen(buffer) - 1] = '\0'; 
		}
		fclose(fp);
	}

	return 0;
}
