#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Failed to open file: %s\n", argv[1]);
        return 1;
    }

    for (int c = fgetc(file); c != EOF; c = fgetc(file)) {
        printf("%c", c);
    }

    fclose(file);
    return 0;
}
