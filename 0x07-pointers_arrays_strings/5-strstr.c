#include "main.h"
#include <string.h>
/**
*_strstr - a function that searches a string for any of a set of bytes.
*
*@haystack : first string
*
*@needle : pointer to second string
*
*Return: alway return h
*/
char *_strstr(char *haystack, char *needle)
{
char  *h = strstr(haystack, needle);
return (h);
}
