/**
 * _memcpy - copies a memory area
 *
 * @dest: destination to write to
 * @src: source to copy from
 * @n: number of bytes to write
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
