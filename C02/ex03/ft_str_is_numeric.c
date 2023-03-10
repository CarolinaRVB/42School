#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (('0' <= str[i] && str[i] <= '9') || str[i] == ' ')
                {
                        str[i] = '1';
                }
                else
                {
                        str[i] = '0';
                }
                i++;
        }
        return *str;
}

int     main()
{
        char    str[12] = "eh# j#$923vg";

        ft_str_is_numeric(str);
        printf("%s", str);
}
