#include "shell.h"

/**
 **_strncpy - this helps to copy a string
 *@dest: this is the destination string to be copied
 *@src: this is the string source
 *@n: this is the amount of chars to be copied
 *Return: this is the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - this helps concatenate two strings
 *@dest: this is the first string
 *@src: this is the second string
 *@n: this is the amount of bytes to be maximally used
 *Return: returns the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - helps to locate a char in a string
 *@s: this is the string to be parsed
 *@c: this is the char to look for
 *Return: this resturns a string
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
