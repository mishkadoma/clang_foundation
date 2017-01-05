#include <stdio.h>

void set_int(int a);


int main(void)
{
    int a = 10;
    printf("%d\n", a);
    set_int(a);
    printf("%d\n", a);
}

void set_int(int a)
{
    a=22;
}