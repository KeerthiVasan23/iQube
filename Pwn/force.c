#include <stdlib.h>
#include <stdio.h>

int main(){

	int cells = 0;
	int n;
	while (cells >= 0){
		printf("You have %d midiclorians.\n",cells);
fflush(stdout);
    fflush(stdin);
		printf("Feeling Strong?\n ");
fflush(stdout);
    fflush(stdin);

		if (scanf("%d",&n) != 1){
			printf("010001100110111101110010011000110110010100100001\n");
fflush(stdout);
    fflush(stdin);
		} else {
			if (n < 0){
				printf("..-. --- .-. -.-. . \n");
fflush(stdout);
    fflush(stdin);
			} else {
				cells += n;
			}
		}
	}
	
	printf("A New Hope!\n");
fflush(stdout);
    fflush(stdin);
printf("%d\n",cells);
	system("cat /bin/pwn1");
        return 0;

}


