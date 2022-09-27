#include "main.h"
/**
* _memcpy - function that copies string from sourc to destination
*
*@dest : file destination
*
*@src : file source
*
*@n : size of character
*
*Return: returning the value of dest
*/
#include <stdio.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
