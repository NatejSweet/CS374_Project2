#include <stdio.h>

int main(int argc, char *argv[]) {
    // Iterate through the arguments and print them
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
