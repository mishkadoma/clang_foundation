#include <stdio.h>
#include <cs50.h>

int main(void)
{
    do
    {
        printf("Enter temperature in Fahrenheit: ");
        float f = GetFloat();
        float c = 5.0/9.0*(f - 32.0);
        printf("In Celsius your temperature is: %.1f\n", c);
    }
    while (true);
}