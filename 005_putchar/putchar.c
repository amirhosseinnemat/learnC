#include <stdio.h>
#include <string.h>

int main() {

    char msg[] = "Hello, world";
    for (int i = 0; i < strlen(msg); i++) {
        putchar(msg[i]);
    }
    putchar('\n');
    return 0;
}