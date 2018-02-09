#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {

        char ptr[20];
        char* p;

        if(argc>1){
                FILE *fp = fopen(argv[1], "r");
                p = fgets(ptr, sizeof(ptr), fp);
        }
        else{
                p = fgets(ptr, sizeof(ptr), stdin);
        }
        if (strcmp(ptr,"deadbeef") == 0 )
              abort();
	else
              printf("%s", ptr);
        return 0;
}
