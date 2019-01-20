#include <stdlib.h>
#include <stdio.h>

int main(){

	int cookies = 0;
	int n;
	while (cookies >= 0){
		printf("You have %d cookies.\n",cookies);
		printf("How many more do you want?\n ");

		if (scanf("%d",&n) != 1){
			printf("Really?\n");
		} else {
			if (n < 0){
				printf("Know some Math!\n");
			} else {
				cookies += n;
			}
		}
	}
	
	printf("Congrats! %d. You win!\n", cookies);
	system("cat /home/keerthi/iQube/flag");

}
