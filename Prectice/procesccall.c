#include <sys/types.h>  // for pid_t
#include <stdio.h>      // for printf, fprintf
#include <unistd.h>     // for fork(), execl(), and wait()
#include <sys/wait.h>


int main() {
    pid_t pid;  // Declare a variable to store process ID

    // Create a new process using fork()
    pid = fork();

    // If fork fails (returns negative)
    if (pid < 0) {
        fprintf(stderr, "Fork Failed\n");  // Print error to stderr
        return 1;  // Exit with error
    }

    // If pid == 0, this is the child process
    else if (pid == 0) {
        // Replace this process with the "ls" command
        printf("I am in children process\n");
        wait(NULL);
        // If execl fails (though rarely happens), print error
        fprintf(stderr, "execl Failed\n");
        return 1;
    }

    // If pid > 0, this is the parent process
    else {
        // Wait for the child process to complete
      
        exit();
        // Print message after child finishes
        printf("Child Complete\n");
    }

    return 0;  // Exit the program successfully
}
