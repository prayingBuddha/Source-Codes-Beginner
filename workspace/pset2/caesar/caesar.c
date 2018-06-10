#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
    int k = atoi(argv[1]);
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i=0; i<strlen(s); i++)
    {
        if((s[i]>64 && s[i]< 91))
        {
            int p = s[i] + k;
            if(s[i]+k<91)
            {printf("%c", s[i]+k);}
            else
            {
            while(p>90)
            {p = p -26;}
            printf("%c", p);
            }
        }
        else if((s[i]>96 && s[i]< 123))
        {
            int p = s[i] + k;
            if(s[i]+k<123)
            {printf("%c", s[i]+k);}
            else
            {
            while(p>122)
            {p = p -26;}
            printf("%c", p);
            }
        }
        else
        {printf("%c", s[i]);}
    }
        printf("\n");
    }
    else if(argc != 2)
    {
        printf("Error Code 1");
        return 1;
    }
    

}