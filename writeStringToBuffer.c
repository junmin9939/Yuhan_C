#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

char buffer[BUFFER_SIZE];

int writeStringToBuffer(const char* string, int x, int y) {
    if (x < 0 || x >= BUFFER_SIZE || y < 0) {
        return -1;
    }
    int length = strlen(string);

    int i;
    for (i = 0; i < length; i++) {
        buffer[x + i + y * BUFFER_SIZE] = string[i];
    }

    return i; 
}

int main() {
    writeStringToBuffer("Hello, world!", 3, 2);

    int i, j;
    for (j = 0; j < BUFFER_SIZE; j++) {
        for (i = 0; i < BUFFER_SIZE; i++) {
            putchar(buffer[i + j * BUFFER_SIZE]);
        }
        putchar('\n');
    }

    return 0;
}
