#include "main.h"
#include <string.h>
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*
*@s : first string
*
*@accept : pointer to second string
*
*Return: alway return h
*/
char *_strpbrk(char *s, char *accept)
{
char  *h;
h = strpbrk(s, accept);
return (h);
}
