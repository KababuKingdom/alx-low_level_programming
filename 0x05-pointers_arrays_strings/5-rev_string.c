#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: the parameter to be reversed
 * Return: the revesed string
 */

void rev_string(char *s)
{
int i;
int len;
char *rev = s;
char tmp;

len = _strlen(s);
while (*(rev++) != '\0')
continue;
rev = rev - 2;

for (i = 0; i < len / 2; ++i)
{
tmp = s[i];
s[i] = rev[0];
rev[0] = tmp;
rev--;

}
}
/**
  * _strlen - return the lenght
  * @s: the parameter
  * Return: the length of an array
  */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);

}
