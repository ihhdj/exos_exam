#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] == 'a')
        {
            i++;
            return i;
        }
        i++;
    }
    return(i);
}
#include <stdio.h>
int main (void)
{
    char str[] = "ihab";
    printf("%d", ft_strlen(str));
    return 0;
}