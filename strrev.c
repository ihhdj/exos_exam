#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

char *rev(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    int tmp;

    while (i < j)
    {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i++;
        j--;
    }
    return str;
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        printf("%s",rev(argv[1]));
    }
    return 0;
}

