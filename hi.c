#include <stdio.h>

int main(void)
{
    char name [256];
    printf("What's your name? ");
    scanf("%s", name);
    printf("%ssir, nice to meet you!\n", name);
}