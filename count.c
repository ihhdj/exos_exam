#include <unistd.h>

int    count(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }
        if(str[j])
        {
            j++;
        }
        while(str[i] != ' ' && str[i] && str[i] != '\t')
        {
            i++;
        }
    }
    return j;
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        printf("%d",count(argv[1]));
    }
}