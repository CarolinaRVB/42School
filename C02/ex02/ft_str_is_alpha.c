#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') || ( 'A' <= str[i] && str[i] <= 'Z' || str[i] == ' '))
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

int	main()
{
	char	str[10] = "eh# j#$gvg";

	ft_str_is_alpha(str);
	printf("%s", str);
}

