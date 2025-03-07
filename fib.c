#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long int fib(long int n);

int main(int argc, char *argv[]) {
	if (argc == 1) {
		puts("pass n value as parameter pls!");
		return 0;
	}

	long int distri[6] = {0};
	long int r = 0;
	for (int i = 0; i < 15000000; i++) {
		r = 1 + rand() % 6;
		//printf("random num is %ld\n", r);
		distri[r-1]++;
	}
	for (int i = 0; i < sizeof(distri) / sizeof(distri[0]); i++) {
		printf("distribution of %d is %ld\n", i+1, distri[i]);
	}

	long int n = atoi(argv[1]);

	for (long int i = 0; i < n; i++) {
		printf("fibonatch of %ld is %ld\n", i, fib(i));
	}
}

long int fib(long int n) {
	if (n == 0 || n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}
