#include<stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (('A' <= str[i] && str[i] <= 'Z') || str[i] == ' ')
                {
                        i++;
                }
                else
                {
                        return 0;
                }
	}
        return 1;
}

int     main()
{
        int	i;
	char    str[12] = "eH# j#$923Vg";

	i = ft_str_is_uppercase(str);
        printf("%d", i);
	return 0;
}
