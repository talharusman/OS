
# Producer Code
```
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define FIFO_FILE "/tmp/myfifo"

int main() {
    int fd;
    char buffer[BUFSIZ];
    ssize_t num_bytes;

    mkfifo(FIFO_FILE, 0666); 

    fd = open(FIFO_FILE, O_WRONLY); 
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    while (1) { // Producer loop
        printf("Producer: Enter a message (or 'exit' to quit): ");
        fgets(buffer, BUFSIZ, stdin);
	
        num_bytes = write(fd, buffer, strlen(buffer)); 

        if (num_bytes == -1) {
            perror("write");
            exit(EXIT_FAILURE);
        }

        if (strncmp(buffer, "exit", 4) == 0) { 
            break;
        }
    }

    close(fd); // Close the named pipe
    unlink(FIFO_FILE); 
    return 0;
}

```

# Consumer Code
```
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define FIFO_FILE "/tmp/myfifo"

int main() {
    int fd;
    char buffer[BUFSIZ];
    ssize_t num_bytes;

    mkfifo(FIFO_FILE, 0666); 
    fd = open(FIFO_FILE, O_RDONLY);

    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    while (1) { // Consumer loop
        printf("Consumer read messaged: %s",buffer);
	num_bytes = read(fd, buffer, BUFSIZ);
	
        if (num_bytes == -1) {
            perror("read");
            exit(EXIT_FAILURE);
        }

        if (strncmp(buffer, "exit", 4) == 0) { 
            break;
        }
    }

    close(fd); // Close the named pipe
    unlink(FIFO_FILE); 

    return 0;
}
```
# Output
![image](https://github.com/user-attachments/assets/81b6a710-fb0b-4cdc-b2a2-8694d09bd29a)


# Output
