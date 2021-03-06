#include <stdio.h>
#include <stdlib.h>

void read_integer(char *s, int *val) {
    int rc;
    if(val == NULL) {
        return;
    }
    rc = sscanf(s, "%d", val);
    if(rc != 1) {
        printf("No integer found!\n");
        exit(1);
    }
}

int main(int argc, char **argv) {
    int val;
    char *buf;

    if(argc != 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }

    read_integer(argv[1], &val);
    buf = (char*)malloc(val); 
    // ...
    free(buf);
    return 0;
}
