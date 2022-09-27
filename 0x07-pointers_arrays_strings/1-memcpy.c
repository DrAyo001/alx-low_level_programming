#include "main.h"

/**
 * Description: _memcpy copies memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    for (; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}