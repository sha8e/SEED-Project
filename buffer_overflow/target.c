/* 
 * the vulnerable program
 * target.c 
 *
 * this program has a buffer overflow vulnerability. 
 * our task is to exploirt this vulnerability.
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof(char *str)
{
	char buffer[12];

    /* the following statement has a buffer overflow problem. */    
    strcpy(buffer, str);
    return 0;
}

int main(int argc, char **argv)
{
    char str[517];
    FILE *badfile;
    badfile = fopen("badfile", "r");
    fread(str, sizeof(char), 517, badfile);
    bof(str);

    printf("return properly\n");
    return 1;
}
