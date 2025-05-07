#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *helloWorld(void *vargp) {
    sleep(1);  // Delay the thread for 1 second
    printf("Hello World \n");
    return NULL;
}

int main() {
    pthread_t thread_id;
    printf("Before Thread\n");

    // Create a new thread that runs helloWorld
    pthread_create(&thread_id, NULL, helloWorld, NULL);

    // Wait for the thread to finish
  

    printf("After Thread\n");
    exit(0);
}
