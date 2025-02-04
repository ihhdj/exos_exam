#include <unistd.h>

void    sort(int *tab, int size)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if(tab[j] > tab[j + 1])
            {
                tmp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = tmp;
                
            }
            j++;
        }
        i++;
    }
}
#include <stdio.h>
int main (void)
{
    int i = 0;
    int tab[] = {1, 4, 7, 5, 3, 2};
    sort(tab, 6);
    while (i < 6)
    {
        printf("%d",tab[i]);
        i++;
    }
    return 0;
}