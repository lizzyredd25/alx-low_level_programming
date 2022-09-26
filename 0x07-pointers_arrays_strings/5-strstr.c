#include <string.h>
/**
 * _strstr - locates a substring
 * :haystack: string to search substring in
 * @needle: substring to serach for
 * Return: pointer to tghe beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
