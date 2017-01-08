#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

void to_cipher(string plaintext, int key);
string alphabet(void);

int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Error! Usage: ./caesar <key>\n");
        return 1;
    }
    int key = atoi(argv[1]);
    
    printf("plaintext: ");
    string plaintext = GetString();
    
    printf("ciphertext: ");
    to_cipher(plaintext, key);
    printf("\n");
    
}

void to_cipher(string plaintext, int key)
{
    string alphabet1 = alphabet();
    for (int i=0, n=strlen(plaintext); i<n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                printf("%c", toupper(alphabet1[(plaintext[i]-'A'+key)%26]));
            }
            else
            {
                printf("%c", alphabet1[(plaintext[i]-'a'+key)%26]);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
}

string alphabet(void)
{
    char character = 'a';
    static char alphabet1[26];
    for (int i=0; i<26; i++)
    {
        alphabet1[i] = character;
        character++;
    }
    return alphabet1;
}