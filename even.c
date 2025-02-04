#include <unistd.h>

void even(char *str)
{
    int i = 0;
    int c;
    while (str[i])
    {
        c = i + 1;
        if(str[i] % 2 == 0)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        even(argv[1]);
    }
    return 0;
}