#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int count = 0;
while (count < 11)
  {
    char alphabet = 'a';
  while (alphabet <= 'z')
    {
      _putchar(alphabet);
      alphabet++;
    }
  
  count++;
 _putchar('\n');
  }
 
}
