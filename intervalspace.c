#include <unistd.h>

void space(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i + 1] == '\0')
        {
            write(1, &str[i], 1);
        }
        else
        {
            write(1, &str[i], 1);
            write(1, "   ", 3);
        }
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        space(argv[1]);
    }
    return 0;
}