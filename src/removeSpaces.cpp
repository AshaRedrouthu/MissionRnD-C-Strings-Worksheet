/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str == nullptr)
		return '\0';
	int i = 0, j = 0, k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			j = i + 1;
			while (str[j] == ' ')
				j++;
			k = i;
			while (str[j] != '\0')
			{
				str[k] = str[j];
				j++, k++;

			}
			str[k] = '\0';
		}
	}
}