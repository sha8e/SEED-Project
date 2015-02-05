/*
 * getenv_addr.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    /* TODO */
    char *ptr;
    if(argc < 3){
        fprintf(stderr, "usage: %s <environment var> <target program name>",
        argv[0]);
        exit(-1);
    }
    ptr = getenv(argv[1]);
    //ptr += (strlen(argv[0])-strlen(argv[2])) * 2;
    printf("%s will be at %p\n", argv[1], ptr);
    printf("[+]test %s at %p\n", ptr, ptr);
    printf("[+]test %s at %p\n", ptr-2, ptr-2);

    return 0;
}

