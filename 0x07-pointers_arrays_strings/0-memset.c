#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
unsigned int i;
for(i = 0; i < n; i++)
s[i] = b;
=======
unsigned int x = 0;
for (; n > 0 ; x++, n--)
{
s[x] = b;
}
>>>>>>> 6325d6649d912643e94fe24a07ce43da532b7914
return (s);
}
