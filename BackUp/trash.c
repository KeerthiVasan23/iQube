/*
#include <stdio.h>
#include <string.h>
int main(){
    char* cipher="ow{fk}oRr0Zgt5aoRe{f@95aoRe0vp0vgt5";
    char* flag="hey_hacker_it's_not_simple_as_that!";
    char FLAG[100];
    int i=0;
    for(;i<strlen(flag);i++){
	FLAG[i]=(char)((int)cipher[i]^3);
	FLAG[i]=(char)((int)FLAG[i]-3);
    }
    char buff[100];
    printf("Do you know the flag?\n");
    scanf("%s",buff);
    if(strcmp(buff,FLAG)==0){
	printf("May the force be with you!\n");
    }
    else{
	printf("You were supposed find them! Not guess them!\n");
    }
    return 0;
}
*/
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
    printf("%s",FLAG);
    char buff[100];
    printf("\nDo you know the flag?\n");
    scanf("%s",buff);
    printf("buff:%s\n",buff);
    printf("flag:%s\n",FLAG);
    if(strcmp(buff,FLAG)==0){
	printf("May the force be with you!\n");
    }
    else{
	printf("You were supposed find them! Not guess them!\n");
    }
    return 0;
}
