#include <unistd.h>

void    wd(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int c = 0;

    while(s1[i])
    {
        i++;
    }
    while(s2[c])
    {
        if (s1[j] == s2[c])
        {
            j++;
        }
        c++;
    }
    c = 0;
    if (i == j)
    {
        while(s1[c])
        {
            write(1, &s1[c], 1);
            c++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        wd(argv[1], argv[2]);
    }
    return 0;
}