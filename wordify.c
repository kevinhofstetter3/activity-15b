#include<string.h>
#include<stdlib.h>
#include<stdio.h>

#define MAX_LENGTH 3000

char *getSentence(void)
{
    char *s = (char*)malloc(MAX_LENGTH);
    printf("INPUT: ");
    fgets(s, MAX_LENGTH, stdin); //Read in MAX LENGTH characters from stdin, store in sentence array
    return s;
}



int main(void)
{
    char *sentence;
    char *word;
    char *wordList[100];
    int counter = 0;
    sentence = getSentence();
    printf("Sentence: %s\n", sentence);

    word = strtok(sentence, " \n"); // get first word
    wordList[counter] = word;
    while(word != NULL)
    {
        printf("Word Found: %s\n", wordList[counter]);
        word = strtok(NULL, " \n");
        counter++;
        wordList[counter] = word;
    }
    //printf("First Word: %s\n", word);
}