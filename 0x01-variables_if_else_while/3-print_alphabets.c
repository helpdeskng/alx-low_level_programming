\1;95;0c#include <stdio.h>
/**
 *main - This is the start of the main program
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

