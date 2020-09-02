#include <stdio.h>
#include <string.h>
#define ROT 13

/***************************************************************************************************
argv and argc are how command line arguments are passed to main() in C and C++. argc will be the
number of strings pointed to by argv. This will (in practice) be 1 plus the number of arguments, as
virtually all implementations will prepend the name of the program to the array.

The variables are named argc (argument count) and argv (argument vector) by convention, but they can
be given any valid identifier: int main(int num_args, char** arg_strings) is equally valid.

They can also be omitted entirely, yielding int main(), if you do not intend to process command line
arguments.
***************************************************************************************************/

int main (int argc, char const *argv[])
{
	int i;
	
	printf("\nROT13 Encryption Produces This Result:\n");

	for (i=1; i<=argc-1; i++)
	{
		int count;
		int rotlen;	

		rotlen = strlen(argv[i]);	

		char rotstr[rotlen];
		char rotted[rotlen];

		strcpy(rotstr, argv[i]);
	
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

return 0;
}
