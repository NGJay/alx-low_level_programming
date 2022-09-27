/**
*_strchr - a function to find a character in a string
*
*@s : string
*
*@c : character to find
*
*Return: i
*/
#include "main.h"
#include <string.h>
char *_strchr(char *s, char c)
{
char *i;
i = strchr(s, c);
return (i);
}
