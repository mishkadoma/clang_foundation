#include <cs50.h>
#include <string.h>
#include <stdio.h>

int selecting_multiples(int user_input);

int main(void)
{
  int user_input;
  do {
    printf("Enter a number between 1 and 100: ");
    user_input = GetInt();
  } while(user_input>100||user_input<1);
  selecting_multiples(user_input);
}

int selecting_multiples(int user_input)
{
  for (int i = 1; i > 0; i++) {
    if (user_input*i<=100)
    {
      printf("%d ", user_input*i);
    }
    else {
      break;
    }
  }
  printf("\n");
  return 0;
}
