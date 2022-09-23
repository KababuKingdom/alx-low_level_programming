#include “main.h”
/**
 * _isalpha – function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
Int _isalpha(int c)
{
	If ((c >= ‘a’ && c <= ‘z’) || (c >= ‘A’ && c <= ‘Z’))
	{
	Return (1);
	}
	Else
	Return (0);
}
