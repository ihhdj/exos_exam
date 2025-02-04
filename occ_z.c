#include <unistd.h>

int occ(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if (str[i] == 'z')
        {
            j++;
        }
        i++;
    }
    return j;
}
#include <stdio.h>
int main (int argc, char **argv)
{
    if(argc == 2)
    {
        printf("%d", occ(argv[1]));
    }
    return 0;
}