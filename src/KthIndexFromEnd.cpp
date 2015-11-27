/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

int len(char *str){
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
char KthIndexFromEnd(char *str, int K) {
	if (str == ""|| str == nullptr)
		return '\0';
	int length=len(str);
	char ch = '\0';
	if (K > length)
		return '\0';
	if (K<=length)
	ch = str[length - K - 1];
	return ch;
}