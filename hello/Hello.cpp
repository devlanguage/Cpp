#include <stdio.h>
#include <unistd.h>
int main() {
    int a = 13;
    printf("hello, world!\n");
    printf("a=%-12d\n", a);
    //char *getpass(const char *prompt);
    //char * password = getpass("admin");
    //printf("s=%-12s\n", password);
    for ( int i = 99; i < 103; ++i ) {
      printf("i=%-12d,i=%\n", i);
    }
    return 0;
}
