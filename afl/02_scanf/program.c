#include <stdio.h>
#include <stdlib.h>
void unsafe_input() {
    char buf[6];
    int i;
    i = scanf("%5s",buf);
    printf(buf);
}
int main () {
    printf("Enter the password: ");
    unsafe_input();
    return 0;
}
