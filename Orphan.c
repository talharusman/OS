#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();  // Create child process

    if (pid == 0) {
        // Child process
        sleep(5);  // Wait a bit
        printf("Child is now an orphan, new parent is: %d\n", getppid());
    } else {
        // Parent process
        printf("Parent is exiting...\n");
        _exit(0);  // Parent exits immediately
    }

    return 0;
}
