#include "shell.h"

/**
 * interactive - return true if the shell is an_interactive mode
 * @info: struct_address
 *
 * Return: 1 if interactive mode, 0 other_wise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - check if char is a_delimeter
 * @c: the char to check
 * @delim: the_delimeter strings
 * Return: 1 if true, 0 if_false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - check for an_alphabetic char
 * @c: The char to the input
 * Return: 1 if c is an_alphabetic, 0 other_wise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - convert string to an_integer
 * @s: the string has to be_converted
 * Return: 0 if no num in_string, converted num other_wise
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
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

