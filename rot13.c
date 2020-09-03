#include <stdio.h>
#include <string.h>

void rotateWords(int wordIndex, char const *wordArray[], int mode);

int main(int argc, char const *argv[]) {
	if (strcmp("--47",argv[1]) == 0) { //first argument is the 47 flag
		for (int i = 2; i <= argc - 1; i++) {//-1 as "rot13.exe" is 1st "argument", loop on count of words passed in
			rotateWords(i, argv, 47);
		}
	} else {
		for (int i = 1; i <= argc - 1; i++) {//-1 as "rot13.exe" is 1st "argument", loop on count of words passed in
			rotateWords(i, argv, 13);
		}
	}
	return 0;
}

void rotateWords(int wordIndex, char const *wordArray[], int mode) {
	int wordLength = strlen(wordArray[wordIndex]);
	char word[wordLength];
	char rotatedWord[wordLength];
	strcpy(word, wordArray[wordIndex]);
	for (int letterIndex = 0; letterIndex <= wordLength - 1; letterIndex++)	{
		//if (letterIndex == 0 && wordIndex != 1) {printf(" ");} //hack to put space infront of all words except first
		if (((word[letterIndex]>='a')&&(word[letterIndex]<='m'))||((word[letterIndex]>='A')&&(word[letterIndex]<='M'))) {
			rotatedWord[letterIndex] = word[letterIndex] + 13;
		} else if (((word[letterIndex]>='n')&&(word[letterIndex]<='z'))||((word[letterIndex]>='N')&&(word[letterIndex]<='Z'))) {
			rotatedWord[letterIndex] = word[letterIndex] - 13;
		} else {
			rotatedWord[letterIndex] = word[letterIndex];
		}
		printf("Word: %s\t Letter Index: %d\t Letter: %c\t Rotated Letter: %c\n",word,letterIndex + 1,word[letterIndex],rotatedWord[letterIndex]);
		//printf("%c",rotatedWord[letterIndex]);
	}
	printf("wordArray[%d]: %s\t wordLength: %d\t Word: %s\n", wordIndex, wordArray[wordIndex], wordLength, word); //print a pretty array of the words
}
