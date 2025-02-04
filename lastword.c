#include <unistd.h>

int     ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return i;
}

void last(char *str)
{
    int i = ft_strlen(str) - 1;

    while(str[i] == ' ' || str[i] == '\t')
    {
        i--;
    }
    while(str[i] != ' ' && str[i] != '\t' && str[i])
    {
        i--;
    }
    i++;
    while(str[i] != ' ' && str[i] != '\t' && str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        last(argv[1]);
    }
    return 0;
}