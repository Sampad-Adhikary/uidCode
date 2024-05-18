#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Real user ID: %d\n", getuid());
    printf("Effective user ID: %d\n", geteuid());
    
    FILE *file;
    file = fopen("/tmp/test.txt", "w");
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }
    fprintf(file, "Hello, world!\n");
    fclose(file);

    return 0;
}
