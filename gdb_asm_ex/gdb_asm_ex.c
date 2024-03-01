#include <stdio.h>
int pass_code = 10;
int user_code;
void sub() {
	user_code++;
	pass_code++;
	return;
}
char e[] = "Enter ";
char t[] = "the ";
char p[] = "password: ";
int main() {
	user_code = 0;

	printf("%s%s%s",e,t,p);
	scanf("%d",&user_code);
	sub();
	if (user_code == pass_code)
		printf("Good Job.\n");
	else
		printf("Try again.\n");
}
