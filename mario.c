#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Enter Mario pyramide height: ");
        height = GetInt();
    }
    while (!(height<=23&&height>=0));
    
    int height1 = height-1;
    int height2 = 1;
    for (int k=0; k<height; k++)
    {
        for (int i=0; i<height1; i++)
        {
            printf(" ");
        }
        
        for (int i=-1; i<height2; i++)
        {
            printf("#");
        }

        printf("\n");
        
        height1--;
        height2++;
    }
}