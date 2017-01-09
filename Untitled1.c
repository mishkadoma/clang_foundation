#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    x = 0;
    do{
        printf("Enter something: ");
        string input_text = GetString();
        if (2<3)
        {
            printf("%s is Less than 100\n", input_text);
        }
        printf("Your input is: %s, %i\n", input_text, x);
        x = x + 1;
    }
    while (x<4);
    
}