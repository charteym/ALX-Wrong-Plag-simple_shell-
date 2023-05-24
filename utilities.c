#include "shell.h"
#include <stdlib.h>

/**
 * interactive - Helps return code to true if shell mode is interactive
 * @info: the structure address
 * Return: if it is interactive in  mode return 1, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim -Helps check if character is a delimeter
 * @c: The char to check
 * @delim: This is the delimeter string
 * Return: if true return 1, if false return 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - This checks for the alphabetic char
 * @c: char to input
 * Return: if c is alphabet then return 1,if not return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - this helps to convert string to int
 * @s: string converted
 * Return:  if str does not contain numb return 0,
 * if there are num present, it will return the converted numb
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
