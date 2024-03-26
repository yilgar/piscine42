#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void ft_strswap(char **s1, char **s2)
{
    char *temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (*(s1 + i) || *(s2 + i))
    {
        if (*(s1 + i) != *(s2 + i))
            return ((unsigned char)*(s1 + 1) - (unsigned char)*(s2 + i));
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    i = 1;
    while (j < argc)
    {
        i = 1;
        while (i + 1 < argc)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
                ft_strswap(&argv[i], &argv[i + 1]);
            i++;
        }
        j++;
    }
    i = 1;
    while (argv[i])
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}