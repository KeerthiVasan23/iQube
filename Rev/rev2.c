#include <stdio.h>

int main()
{
int lvl1,lvl2,lvl3;
printf("Beginner's Luck!\n");
scanf("%d",&lvl1);
if(lvl1==13){
	printf("Good!\nHere's another one..");
	scanf("%d",&lvl2);
	if(lvl2==1337){
	printf("Keep Going!\n");
	scanf("%d",&lvl3);
		if(lvl3==123456789){
			printf("Hackerman!\n");
			system("cat /home/keerthi/iQube/flag");
		}
		else{
			printf("Try Harder!\n");
		}
	}
	else{
	printf("Try Harder!\n");
	}
}
else{
printf("Try Harder!\n");
}
return 0;
}
