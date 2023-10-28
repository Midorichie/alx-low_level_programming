#include "main.h"

/**
 * _isalpha - program check for alphabets
 * @c: character
 * Return: 1 if c is a letter, else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
