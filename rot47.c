#include <stdio.h>
#include <string.h>
#define ROT 47

main (argc,argv)

int argc;
char *argv[];

{
	int go;
	
	printf("\nROT47 Encryption Produces This Result:\n");

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

			if ((rotted[count]>=33)&&(rotted[count]<=79))
			{
				rotted[count]=rotted[count]+ROT;
			}
		
			else if ((rotted[count]>=80)&&(rotted[count]<=126))
			{
				rotted[count]=rotted[count]-ROT;
			}
		
			printf("%c", rotted[count]);
		}
		
		printf(" ");
	}
	
	printf("\n\n");
}
