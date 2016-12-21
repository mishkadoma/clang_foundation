#include <stdio.h>
#include <cs50.h>

int main(void)
{

    do
    {
        printf("Give me an int 0 or 1: ");
        int n = GetInt();
        switch (n)
        {
            case 0:
                printf("Your number is %i\n", n);
                break;
            
            case 1:
                printf("Your number is %i\n", n);
                break;
        }
    }
    while (true);
}