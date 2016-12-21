#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter your name:");
    string a = GetString();
    printf("Your name is: %s\n", a);
}