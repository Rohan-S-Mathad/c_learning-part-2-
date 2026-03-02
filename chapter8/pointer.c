
#include <stdio.h>

int main() {
    char *str = "hello";
    printf("%c\n", *str);       // h (first character)
    printf("%c\n", *(str+1));   // e (second character)
    printf("%s\n", str);        // hello (entire string)
    return 0;
}
