#include <unistd.h>

char    *low(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

void    cap(char *str)
{
    int i = 0;
    int j = 1;

    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if (j == 1)
            {
                str[i] -= 32;
            }
            j = 0;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            j = 0;
        }
        else
        {
            j = 1;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    if(argc == 2)
    {
        cap(argv[1]);
    }
    return 0;
}