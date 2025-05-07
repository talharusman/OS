#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();  // Create child process

    if (pid == 0) {
        // Child process
        printf("Child process: PID = %d\n", getpid());
        printf("Child finished\n");
    } else {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        sleep(10);  // Parent sleeps, doesn't wait for child
        printf("Parent finished\n");
    }

    return 0;
}
