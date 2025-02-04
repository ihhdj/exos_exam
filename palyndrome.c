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

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void pal(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;

    while (str[i] && str[j])
    {
        if (str[i] != str[j])
        {
            break;
        }
        i++;
        j--;
    }
    if (str[i] == '\0')
    {
        ft_putstr(str);
    }
}

int main (void)
{
    char str[] = "anna";
    pal(str);
    write(1, "\n", 1);
    return 0;

}