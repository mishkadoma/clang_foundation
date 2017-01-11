#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

void to_cipher(string plaintext, string key);
string alphabet(void);

int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Error! Usage: ./vigenere <keyword>\n");
        return 1;
    }
    string key = argv[1];
    
    printf("plaintext: ");
    string plaintext = GetString();
    
    printf("vigeneretext: ");
    to_cipher(plaintext, key);
    printf("\n");
    
}

void to_cipher(string plaintext, string key)
{
    string alphabet1 = alphabet();
    int j = 0;
    int key_index = j%strlen(key);
    for (int i=0, n=strlen(plaintext); i<n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            j++;
            if (isupper(plaintext[i]))
            {
                printf("%c", toupper(alphabet1[(plaintext[i]-'A'+key[key_index])%26]));
            }
            else
            {
                printf("%c", alphabet1[(plaintext[i]-'a'+key[key_index])%26]);
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
