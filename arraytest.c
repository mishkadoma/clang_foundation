#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int x[] = { 0, 2, 3, 4 };
    char my_name[] = { 'M', 'I', 'K', 'H', 'A', 'I', 'L'};

    for (int i=0; i<4; i++)
    {
      printf("%i\n", x[i]);
    }

    for (int i = 0; i < (sizeof(my_name)); i++)
    {
      printf("%c\n", my_name[i]);
    }
    return 0;
}
