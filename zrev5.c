#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int key = 1;

int main(){
    int *ptr = &key;
    char buff[100];
    fgets(buff,sizeof(buff),stdin);	
    printf(buff);
    if (key == 3*3*3){
        system("cat /home/keerthi/iQube/flag");
    }
else{
printf("Value is %d\n",key);}
    return 0;
}
