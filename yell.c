#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

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
                for (int i = 0; i < bytesRead; i++) {
                    s[i] = toupper(s[i]);
                }
                write(1, s, bytesRead);
            }
            close(file);
        }
    }
}