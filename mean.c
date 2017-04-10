#include <stdio.h>
#include <cs50.h>

#define N 5

float the_mean(int *x);

int main(void)
{
    int numbers[N];
    
    for (int x = 0; x < N; x++)
    {
        printf("Enter your number:");
        numbers[x] = get_int();
    }
    
    printf("Average: %.2f\n", the_mean(numbers));
    
    return 0;
}

float the_mean(int *x)
{
    int result = 0;
    for (int n = 0; n < N; n++)
    {
        result += x[n];
    }
    
    return ((float) result / N);
}