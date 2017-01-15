#include <cs50.h>
#include <stdio.h>

void print_row(int user_input);

int main(void)
{
    int user_input;
    do
    {
        printf("Give me a number between 1 and 23:");
        user_input = get_int();
        
    }
    while (!(user_input<=23&&user_input>0));
    print_row(user_input);
    
}

void print_row(int user_input)
{
    for (int j=0, n=user_input; j<n; j++)
    {
        for (int i=0; i<n; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}
