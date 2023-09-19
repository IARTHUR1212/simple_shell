#include "shell.h"

/**
 **_strncpy - copies a_strings
 *@dest: the destination_string to_be copied to
 *@src: source_string
 *@n: the_amt of char to_be copied
 *Return: the_concatenated strings
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
 **_strncat - concatenates_two strings
 *@dest: first_string
 *@src: second_string
 *@n: the_amount of the_bytes to_be maximally used
 *Return:concatenated_string
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
 **_strchr - locates a_char in a string
 *@s: the_strings to_be parsed
 *@c: the char to_look out for
 *Return: (s) a_pointer to_the memory_area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

