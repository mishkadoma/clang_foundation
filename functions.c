#include <cs50.h>
#include <stdio.h>

int GetPositiveInput(void);
void OutputFunction(int input);

int main(void)
{
    OutputFunction(GetPositiveInput());
}

int GetPositiveInput(void)
{
    int user_input;
    do
    {
        printf("Enter a positive number: ");
        user_input = GetInt();
    }
    while (user_input<1);
    return user_input;
}

void OutputFunction(int input)
{
    printf("You've entered %i!\n", input);
}
