#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
  int i, arraylen;

  arraylen = sizeof(int a) / sizeof(int);

 for (i = arraylen -1; i >= 0; i--)
   {
     printf("%d", a[i]);

   }
  
  printf("\n");
}