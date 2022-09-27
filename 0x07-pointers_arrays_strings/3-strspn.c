/**
*_strspn - a function to get the length of a string
*
*@s : the string
*
*@accept : when the length will be saved
*
*Return: always return n
*/
#include "main.h"
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
n = strspn(s, accept);
return (n);
}
