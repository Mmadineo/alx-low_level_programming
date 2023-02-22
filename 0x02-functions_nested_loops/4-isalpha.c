#include "main.h"

/**
 * _islapha - checka for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is letter, otherwise 0.
 */

int _islapha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
