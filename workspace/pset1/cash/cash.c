#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change = get_float("Change owed: ")*100;
    change = round(change);
    int n = 0;
    int p = 0;
    n = (change/25);
    p = change/25;
    change = change - (p*25);
    n = n + (change/10);
    p = change/10;
    change = change - (p*10);
    n =n + (change/5);
    p = change/5;
    change = change - (p*5);
    n = n+(change/1);
    p = change/1;
    change = change - (p*1);
    printf("%i\n", n);
}