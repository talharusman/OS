#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/msg.h>

struct msgbuf {
    long mtype;
    char msgtxt[200];
};

int main(void) {
    struct msgbuf msg;
    int msgid;
    key_t key;

    // Generate the same key as sender using ftok
    if ((key = ftok("message_send.c", 'b')) == -1) {
        perror("key");
        exit(1);
    }

    // Access the message queue
    if ((msgid = msgget(key, 0644)) == -1) {
        perror("msgget");
        exit(1);
    }

    // Infinite loop to keep receiving messages
    for (;;) {
        if (msgrcv(msgid, &msg, sizeof(msg), 1, 0) == -1) {
            perror("msgrcv");
            exit(1);
        }

        // Print the received message
        printf("Received message: %s", msg.msgtxt);
    }

    return 0;
}
