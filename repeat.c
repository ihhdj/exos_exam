#include <unistd.h>

void    repeat(char *str)
{
    int i = 0;
    int count = 0;
	int	j;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count = str[i] - 'a' + 1;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count = str[i] - 'A' + 1;
        }
        else
        {
            count = 1;
        }
		j = 0;
        while(j < count)
        {
            write(1, &str[i], 1);
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        repeat(argv[1]);
    }
}