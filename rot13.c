#include <stdio.h>
#include <string.h>

#define ROT 13 //hardcoded rotate by 13 places, may be changed in future.

void rotateWords(int wordIndex, char const *wordArray[]) {
	int wordLength = strlen(wordArray[wordIndex]);
	char word[wordLength];
	char rotatedWord[wordLength];
	strcpy(word, wordArray[wordIndex]);
	for (int letterIndex = 0; letterIndex <= wordLength - 1; letterIndex++)	{
		if (letterIndex == 0 && wordIndex != 1) {printf(" ");} //hack to put space infront of all words except first
		if (((word[letterIndex]>='a')&&(word[letterIndex]<='m'))||((word[letterIndex]>='A')&&(word[letterIndex]<='M'))) {
			rotatedWord[letterIndex] = word[letterIndex] + ROT;
		}
		else if (((word[letterIndex]>='n')&&(word[letterIndex]<='z'))||((word[letterIndex]>='N')&&(word[letterIndex]<='Z'))) {
			rotatedWord[letterIndex] = word[letterIndex] - ROT;
		}
		else {
			rotatedWord[letterIndex] = word[letterIndex];
		}
		//printf("Word: %s\t Letter Index: %d\t Letter: %c\t Rotated Letter: %c\n",word,letterIndex + 1,word[letterIndex],rotatedWord[letterIndex]);
		printf("%c",rotatedWord[letterIndex]);
	}
	//printf("wordArray[%d]: %s\t wordLength: %d\t Word: %s\n", wordIndex, wordArray[wordIndex], wordLength, word); //print a pretty array of the words
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

int main(int argc, char const *argv[]) {
	for (int i = 1; i <= argc - 1; i++) {//-1 as "rot13.exe" is 1st "argument", loop on count of words passed in
		rotateWords(i, argv);
	}
	return 0;
}
