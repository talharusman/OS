/*
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    const char *fifo_path = "/tmp/myfifo";
    const char *message = "Hello, it is me Talha Rusman and I am writing this for named pipe";

    // Create the FIFO (if it doesn't already exist)
    mkfifo(fifo_path, 0666);

    // Open FIFO in write-only mode
    fd = open(fifo_path, O_WRONLY);
    if (fd < 0) {
        perror("Failed to open FIFO for writing");
        return 1;
    }

    // Write only the length of the message
    write(fd, message,sizeof(message) + 1);
    close(fd);

    return 0;
}
*/
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
	int fd, retval;
	char buffer[] = "this is the operating system last lab before mid... mid paper will be on Saturday 30th October,2021";
	
	fflush(stdin);
	retval = mkfifo("/tmp/myfifo",0666);
	fd = open("/tmp/myfifo",O_WRONLY);
	write(fd,buffer,sizeof(buffer));
	close(fd);
	printf("Information Sent");
	return 0;
}
