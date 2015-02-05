/* retlib.c */

/* This program has a buffer overflow vnlnerability */

#include <stdio.h>
#include <string.h>

int bof(FILE *badfile)
{
    char buffer[12];
    /* The following statement has a buffer overflow problem */
    fread(buffer, sizeof(char), 40, badfile);
    return 1;
}
int main(int argc, char **argv)
{
    /* TODO */
    FILE *badfile;
    badfile = fopen("badfile", "r");
    bof(badfile);
    printf("return properly\n");
    fclose(badfile);
    return 0;
}

