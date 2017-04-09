#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

#define POKEMONS_QNT 5

int main()
{
  char *pokemons[POKEMONS_QNT];

  for (int i = 0; i < POKEMONS_QNT; i++)
  {
    printf("Enter the name of the Pokemon: ");
    pokemons[i] = GetString();
  }

  printf("%s, i choose you!\n", pokemons[rand()]);

  return 0;
}
