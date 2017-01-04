#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter number of users in the room: ");
        n = GetInt();
    }
    while (n < 1);
    
    int ages[n];
    
    for (int i=0; i<n; i++)
    {
        printf("Enter the age of the %i person: ", i+1);
        ages[i] = GetInt();
    }
    
    for (int i=0; i<n; i++)
    {
        printf("Year later age of the person %i will be %i\n", i+1, ages[i]+1);
    }
}