/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	if (input == nullptr&&len <= 0)
		return;
	int i, j,k;
	char ch;
	i = 0;
	j = len - 1;
	while (i<j){
		ch = input[i];
		input[i] = input[j];
		input[j] = ch;
		i++, j--;
	}
	for (i = 0; input[i] != '\0'; i++)
	{
		k = i;
		while (input[k] != ' '&&input[k] != '\0')
			k++;

		j = k - 1;
		while (i<j){
			ch = input[i];
			input[i] = input[j];
			input[j] = ch;
			i++, j--;
		}
		i = k;
	}
	
}
