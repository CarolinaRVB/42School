 #include <unistd.h>

void    ft_print_comb2(void)
{
	char    c[7];
	int     i;
	int     j;
	
	i = 0;
	c[0] = 0;
	c[2] = ' ';
	c[5] = ',';
	c[6] = ' ';
	while (i < 98)
	{
		j = i + 1;
		while (j < 100)
		{
			c[0] = '0' + i / 10;
			c[1] = '0' + i % 10;
			c[3] = '0' + j / 10;
			c[4] = '0' + j % 10;
			write(1, c, 7);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
  }
