#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char buf[4096] = {0};

int main() {
	int in = open("/home/ysahnk/hello.txt", O_RDONLY, 0);
	printf("infile discriptor is %d\n", in);
	int out = open("/home/ysahnk/new.txt", O_WRONLY|O_CREAT|O_TRUNC, 0600);
	printf("outfile discriptor is %d\n", out);

	int l;
	do {
		l = read(in, buf, 4096);
		write(out, buf, l);
	} while (l);

	close(out);
	close(in);

	return 0;
}
