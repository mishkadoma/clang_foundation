#include <stdio.h>
#include <cs50.h>

int multiple_3(void);

int global = 3;

int main(void)
{
    printf("%i\n", global);
    multiple_3();
    printf("%i\n", global);
}

int multiple_3(void)
{
    return global*3;
}