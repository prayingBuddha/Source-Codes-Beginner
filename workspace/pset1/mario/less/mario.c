#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 0 || h >23);
    for(int i = 0; i < h; i++)
    {
        for(int x = 0; x < h-i-1; x++)
        {
            printf(" ");
        }
        for(int n = 0; n < i + 2; n++)
        {
            printf("#");
        }
        printf("\n");
    }
}