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
        if(ptr[0] == 'd')
                if(ptr[1] == 'e')
                        if(ptr[2] == 'a')
                                if(ptr[3] == 'd')
                                        if(ptr[4] == 'b')
                                                if(ptr[5] == 'e')
                                                        if(ptr[6] == 'e')
                                                                if(ptr[7] == 'f')
                                                                        abort();
        return 0;
}
