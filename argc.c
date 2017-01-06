#include <stdio.h>
#include <cs50.h>
#include <string.h>



int main(int argc, string argv[])
{
    for (int i=1; i<argc; i++)
    {
        for (int k=0, f=strlen(argv[i]); k<f; k++)
        {
            printf("%c\n", argv[i][k]);
        }
        printf("\n");
    }
}