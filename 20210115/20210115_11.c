#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "Hello";
    char rts[6];
    rts[0] = str[4];
    rts[1] = str[3];
    rts[2] = str[2];
    rts[3] = str[1];
    rts[4] = str[0];
    rts[5] = str[5];

    printf("%s", rts);
    return 0;
}
