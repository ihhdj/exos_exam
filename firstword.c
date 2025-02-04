#include <unistd.h>

void    first(char *str)
{
    int i = 0;

    while(str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while (str[i] != ' ' && str[i] && str[i] != '\t')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        first(argv[1]);
    }
}