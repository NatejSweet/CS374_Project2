#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_BYTES 2048

int main(int argc, char *argv[]) {
    int file = open(argv[1], O_RDONLY);
    char s[MAX_BYTES];
    int bytesRead;

    while((bytesRead = read(file, s, MAX_BYTES))>0){
        write(1, s, bytesRead);
    }



    close(file);
    return 0;
}
