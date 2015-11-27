/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
void reverse(char *str, int len){
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}
int intTostr(int num, char str[], int afterdecimal){
	int i = 0;
	while (num)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	while (i < afterdecimal)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;

}
int power(int a, int b){
	int result = 1;
	while (b){
		result = result*a;
		b--;
	}
	return result;
}
void number_to_str(float number, char *str, int afterdecimal){
	int intpart = number, f1, j = 0;
	if (number <= -1){
		number = -number;
		intpart = number;
		str[0] = '-';
		j = 1;
	}
	float floatpart = number - intpart;
	int i = intTostr(intpart, str + j, 0);
	if (afterdecimal != 0){
		str[i + j] = '.';
		f1 = floatpart*power(10, afterdecimal);
		intTostr(f1, str + i + j + 1, afterdecimal);
	}

}
