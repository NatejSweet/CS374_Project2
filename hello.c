
#include <stdio.h>

int x = 12;
float y = 3.14;
char* s = "Hello, world!";

int main() {
    printf("x is %d\n", x);
    printf("y is %f\n", y);
    printf("s is %s\n", s);
    for (int i = 0; i < 5; i++) {
        printf("%d x 5 = %d\n", i, i * 5);
    }

}