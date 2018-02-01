#include <stdio.h>
#include <stdlib.h>
void unsafe_input() {
    char buf[6];
    int i;
    i = scanf("%6s",buf);
    printf("%s\n",buf);
}
int main () {
    printf("Enter the password: ");
    unsafe_input();
    return 0;
}
