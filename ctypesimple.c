#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = GetString();
    for (int i=0, n=strlen(s); i<n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}