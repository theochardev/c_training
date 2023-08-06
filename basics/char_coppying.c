#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c); // putchar() prints a character each time it is called
        c = getchar();  // getchar() reads a character each time it is called and assigns it to c
    }
    return 0;
}
