#include <stdio.h>
#include <string.h>

#define ROT 13 //hardcoded rotate by 13 places, may be changed in future.

void rotateWord(int i, char const *wordArray[])
{
	int wordLength = strlen(wordArray[i]);
	char word[wordLength];
	strcpy(word, wordArray[i]);




	printf("wordArray[%d]: %s\t wordLength: %d\t Word: %s\n",i,wordArray[i],wordLength,word); //print a pretty array of the words
}

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
	int i = 0; //index for argument count loop
	for (i=1; i<=argc-1; i++) //-1 as "rot13.exe" is 1st "argument", loop on count of words passed in
	{
		rotateWord(i,argv);
	}
	return 0;
}




		/*
		int count;

		char rotstr[wordLength];
		char rotted[wordLength];

		strcpy(rotstr, argv[i]);

		for (count=0; count<=wordLength; count++)
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
*/



