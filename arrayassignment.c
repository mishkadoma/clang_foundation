#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x[6];
    for (int i=0; i<6; i++)
    {
       x[i]=i;
       printf("%i is %i\n", x[i], i);
    }
}