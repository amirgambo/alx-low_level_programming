#include "main.h"

/**
* rot13 - Encodes a string using rot13.
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/

char *rot13(char *str)
{
	int x1 = 0, x2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (str[x1])
	{
		for (x2 = 0; x2 < 52; x2++)
		{
			if (str[x1] == alphabet[x2])
			{
				str[x1] = rot13key[x2];
				break;
			}
		}

		x1++;
	}

	return (str);
}
