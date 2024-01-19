#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_BYTES 2048

int main(int argc, char *argv[]) {
    int file;
    char s[MAX_BYTES];
    int bytesRead;

    if (argc<1){
        file = 0;
    }else{
        for (int i = 1; i < argc; i++) {
            file = open(argv[i], O_RDONLY);
            while((bytesRead = read(file, s, MAX_BYTES))>0){
                write(1, s, bytesRead);
            }
            close(file);
        }
    }
}