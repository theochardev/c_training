#include <stdio.h>
#define YES 1
#define NO 0

int main(int argc, char const *argv[]) {
    int nl, nw, nc, inword;
    char c;
    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') inword = NO;
        else if (inword == NO) {
            inword = YES;
            ++nw;
        }
    }
    printf("Lines: %d\tWords: %d\tCharacters: %d\n", nl, nw, nc);
    return 0;
}