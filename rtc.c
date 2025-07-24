#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
	//FILE *fp = fopen("/dev/rtc", "r");
	//if (NULL == fp) {
	//	puts("CAN NOT OPEN FILE BY fopen()");
	//}

	int fd = open("/dev/rtc", O_RDONLY);
	if (fd < 0) {
		puts("can not open file");
		perror("rtc");
		exit(1);
	}

	char buffer[256] = { 0 };
	size_t ret = 0;

	ret = read(fd, buffer, 4);
	puts(buffer);

	return 0;

}
