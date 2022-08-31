#include <stdio.h>

int main()
{
    char Char;

    printf("Input your Character: ");
    Char = getchar();
    if (Char >= 'a' && Char <= 'z')
    {
        printf("It's a lowercase character");
    }
    else
    {
        printf("It's not a lowercase character");
    }
    
    return 0;
}