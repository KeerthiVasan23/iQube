#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char input[50];
    int _true = 0;

    printf("Enter the password : \n");
    gets(input);

    if(strcmp(input, "Imp0ssibl3") || strcmp(input, "Ch41l3ng3!"))
    {
        printf ("Try Harder! \n");
    }
    else
    {
        printf ("Hackerman! \n");
        _true = 1;
    }

    if(_true)
    {

        system("cat /home/keerthi/iQube/flag");
    }

    return 0;
}
/*
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
*/
