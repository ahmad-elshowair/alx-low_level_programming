#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string
 *
 * @s: a pointer to the string will be capitalized
 *
 * Return: return thr capitalized string
 */
char *cap_string(char *s)
{
	int word_start = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' ||
				s[i] == '\t' ||
				s[i] == '\n' ||
				s[i] == ',' ||
				s[i] == ';' ||
				s[i] == '.' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '\"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}' ||)
		{
			word_start = 1;
		}
		else if (word_start)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			word_start = 0;
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
		}
	}
	return (s);
}
