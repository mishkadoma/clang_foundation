#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int truthable[100];
    for (int i=0; i<100; i++)
    {
        truthable[i]=i;
        printf("%d\n", truthable[i]);
    }
}

