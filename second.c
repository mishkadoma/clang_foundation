#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter your name:");
    string a = GetString();
    printf("Your name is: %s\n", a);
    printf("Enter an integer: ");
    int number = GetInt();
    if (number>0)
    {
        printf("You picked a positive one\n");
    }
    else if (number<0)
    {
        printf("you picked a negative one\n");
    }
    else
    {
        printf("You picked zero!\n");
    }
}