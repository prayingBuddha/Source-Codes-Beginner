#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int p = 0; // this is the double sum
    long n = get_long_long("Number: ");
    long a = n;
    long f = n;
    int s = 0;
    int l = 0;
    for(int i=0; a>10; i++)
    {
        a = a/10;
        p = 2*(a%10);    // I have to print p form here
        if(p<10)
        {
            l = l + 2*(a%10);    // I have to print p form here
        }
        else if(p>9)
        {
            s = p;
            l = (s%10) + l;
            s = s/10;
            l = (s%10) + l;
        }
        a = a/10;
    }
    int c = f%10;
    for(int k=1; k<16; k++)
        {
            f = f/100;
            c = c + f%10;    // I have to print c form here
            //n = n/10;
        }
    if((l+c)%10==0)
    {
        if(n>4000000000000000 && n<4999999999999999)
        {   printf("VISA\n");}
        else if(n>4000000000000 && n<4999999999999)
        {   printf("VISA\n");}
        else if(n>5100000000000000 && n<5599999999999999)
        {   printf("MASTERCARD\n");}
        else if((n>340000000000000 && n<349999999999999) || (n>370000000000000 && n<379999999999999))
        {   printf("AMEX\n");}
        else
        {   printf("INVALID\n");}
    }
    else
    {printf("INVALID\n");    }

}