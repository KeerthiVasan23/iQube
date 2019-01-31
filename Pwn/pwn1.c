#include <stdlib.h>
#include <stdio.h>

int main(){

	int cells = 0;
	int n;
	while (cells >= 0){
		printf("You have %d midiclorians.\n",cells);
		printf("Feeling Strong?\n ");

		if (scanf("%d",&n) != 1){
			printf("010001100110111101110010011000110110010100100001\n");
		} else {
			if (n < 0){
				printf("..-. --- .-. -.-. . \n");
			} else {
				cells += n;
			}
		}
	}
	
	printf("A New Hope!\n");
	system("cat /bin/pwn1");
        return 0;

}

/*
2147483647
NovaCTF{Th3_f0rc3_i5_5tR0NG_1N_YOu}
gcc pwn1.c -o pwn1
*/
