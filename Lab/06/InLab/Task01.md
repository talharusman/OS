# code 
```
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 25
#define READ_END 0
#define WRITE_END 1

int main(){
    char w_msg[BUFFER_SIZE] = "Greetings";  
    char r_msg[BUFFER_SIZE];  
    int fd[2];  
    pid_t pid;

    if (pipe(fd) == -1) {
        printf("Pipe Failed\n");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        printf("Fork Failed\n");
        return 1;
    } 
    else if (pid > 0) { // Parent process
        close(fd[READ_END]);  
        write(fd[WRITE_END], w_msg, strlen(w_msg) + 1);  
        close(fd[WRITE_END]);
    } 
    else { // Child process
        close(fd[WRITE_END]);  
        read(fd[READ_END], r_msg, BUFFER_SIZE); 
        printf("Read: %s\n", r_msg); 
        printf("Child Process Id: %d\n", getpid()); 
        close(fd[READ_END]);  
    }

    return 0;
}
```
# output
![image](https://github.com/user-attachments/assets/b9ada094-ead0-4d85-90f4-33f1d3c46bb7)


