#include <unistd.h>

int check(char *str, char c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i++] == c)
        {
            return i - 1;
        }
    }
    return -1;
}

void ft_union(char *s1, char *s2)
{
    int i = 0;

    while(s1[i])
    {
        if(check(s1, s1[i]) == i)
        {
            write(1, s1 + i, 1);
        }
        i++;
    }
    i = 0;
    while(s2[i])
    {
        if(check(s2, s2[i]) == i && check(s1, s2[i]) == -1)
        {
            write(1, s2 + i, 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    return 0;
}