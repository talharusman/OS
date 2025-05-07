/*#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char buffer[512] = {0};
    const char *fifo_path = "/tmp/myfifo";

    // Open FIFO in read-only mode
    fd = open(fifo_path, O_RDONLY);
    if (fd < 0) {
        perror("Failed to open FIFO for reading");
        return 1;
    }

    // Read message from FIFO
    read(fd, buffer, sizeof(buffer));
    
    // Print the received message
    printf("Received:");
    write(1,buffer,sizeof(buffer));
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
	char buffer[512] = {0};
	
	fd = open("/tmp/myfifo",O_RDONLY);
	retval = read(fd, buffer, sizeof(buffer));
	fflush(stdin);
	//write(1, buffer, sizeof(buffer));
	puts(buffer);
	printf("\n");	
	close(fd);
	return 0;
}
