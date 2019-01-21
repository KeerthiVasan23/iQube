#include <stdio.h>
#include <string.h>
int main(){
    char cipher[]="gos^cu/Yq/thYth-Yb0n]-{";
    char flag[]="hey_hacker_it's_not_simple_as_that!";
    char FLAG[100];
    int i;
    for(i=0;i<strlen(cipher);i++){
	FLAG[i]=(char)((int)cipher[i]+3);
	FLAG[i]=(char)((int)FLAG[i]^3);
    }
    FLAG[i]='\0';
    char buff[100];
    printf("Do you know the flag?\n");
    scanf("%s",buff);
    if(strcmp(buff,FLAG)==0){
	printf("May the force be with you!\n");
    }
    else{
	printf("You were supposed to find them! Not guess them!\n");
    }
    return 0;
}
