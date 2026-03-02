#include <stdio.h>

int main()
{
    FILE* ptr;
    FILE *ptr2;
    char ch;
    ptr = fopen("read.txt", "r");
    ptr2 = fopen("read2.txt", "a");
    while (1)
    {
    ch = fgetc(ptr);
        
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}