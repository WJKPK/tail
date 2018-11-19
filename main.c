#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[])
{

		int amount = (atoi(argv[1])+1);
		char* circBuf = malloc(sizeof(char)*amount);
		circBuf[amount-1]='\0';

		if (stdin == NULL){
				printf("Operacja się nie udała");
				return 0;
			}
		else
			{
				 int counter = 0;
				 char letter = (char)getchar();
				 while( letter != EOF )
					 {
					 if (counter >= amount-1)
						 	 counter = 0;
					 	circBuf[counter]=letter;
						letter = getchar();
				        counter++;
					 }
				 char* endOfCirc = &circBuf[counter];
				 printf("%s", endOfCirc);
				 circBuf[counter]='\0';
				 printf("%s", circBuf);
			}
		free(circBuf);
	return 0;
}
