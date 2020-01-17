#include <stdio.h>
#include <stdlib.h>

int flaggyyy(){
	printf("\nAlright! Take the flag..\n");
fflush(stdout);
    fflush(stdin);
	system("cat /bin/pwn3");
	return 0;
}
int func(){
	char buffer[20];
	printf("Blow the stack!\n");
fflush(stdout);
    fflush(stdin);
	gets(buffer);	
	return 0;
}

int main(){
  printf("\nHello there\n");
fflush(stdout);
    fflush(stdin);
  func();
  printf("Aah! You're a good lad.\n");
fflush(stdout);
    fflush(stdin);	
  return 0;
}


