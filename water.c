#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int shower_time;
    do
    {
        printf("Enter the lenght of your shower in minutes: ");
        shower_time = GetInt();
    }
    while (shower_time<1);
    int bottles = (192*shower_time/16);
    printf("minutes: %d\n", shower_time);
    printf("bottles: %d\n", bottles);
}