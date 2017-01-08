#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string user_name = GetString();
    
    int index=0;
    while (user_name[index]==' ')
    {
        index++;
    }
    
    printf("%c", toupper(user_name[index]));
    
    for (int i=index, n=strlen(user_name); i<n; i++)
    {
        if (user_name[i]==' '&&user_name[i+1]!=' '&&i+1<n)
        {
            printf("%c", toupper(user_name[i+1]));
        }
    }
    printf("\n");
}