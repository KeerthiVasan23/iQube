#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char input[1000];
    int _true = 0;
    printf("Welcome to yoda \r\n");
    fflush(stdout);
    fflush(stdin);
    printf("Enter the password : ");

    fflush(stdout);
    fflush(stdin);
    gets(input);
    fflush(stdout);
    fflush(stdin);

    if(strcmp(input, "Imp0ssibl3") || strcmp(input, "Ch41l3ng3!"))
    {
        printf ("\n Try Harder! \n");
    fflush(stdout);
    fflush(stdin);

    }
    else
    {
        printf ("\n Hackerman! \n");
    fflush(stdout);
    fflush(stdin);

        _true = 1;
    }

    if(_true)
    {
printf("%d\n",_true);
        system("cat /bin/pwn2");
    }

    return 0;
}

