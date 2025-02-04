#include <unistd.h>
#include <stdlib.h>
int     ft_atoi(char *str)
{
    int i = 0;
    int signe = 1;
    int res = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            signe = -signe;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * signe);
}
#include <stdio.h>
int main(void)
{
    char str[] = "-2147483649";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
    return 0;
}