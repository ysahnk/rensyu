#include <stdio.h>

int hello(int num) {
	for (int i = 0; i < num; i++)
		printf("hello\n");

	return num;
}

int main() {
	int (*func)(int);

	func = hello;

	int ret = func(5);

	return ret;
}
