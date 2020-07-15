#include <stdio.h>
#include <string.h>
#define ROT 13

main (argc,argv)

int argc;
char *argv[];

{
	int go;
	
	printf("\nROT13 Encryption Produces This Result:\n");

	for (go=1; go<=argc-1; go++)
	{
		int count;
		int rotlen;	

		rotlen = strlen(argv[go]);	

		char rotstr[rotlen];
		char rotted[rotlen];

		strcpy(rotstr, argv[go]);
	
		for (count=0; count<=rotlen; count++)
		{
			rotted[count]=rotstr[count];

			if (((rotted[count]>='a')&&(rotted[count]<='m'))||((rotted[count]>='A')&&(rotted[count]<='M')))
			{
				rotted[count]=rotted[count]+ROT;
			}
		
			else if (((rotted[count]>='n')&&(rotted[count]<='z'))||((rotted[count]>='N')&&(rotted[count]<='Z')))
			{
				rotted[count]=rotted[count]-ROT;
			}
		
			printf("%c", rotted[count]);
		}
		
		printf(" ");
	}
	
	printf("\n\n");
}
