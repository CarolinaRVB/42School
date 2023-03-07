void	ft_swap(int *a, int *b)
{
	int	c;
	
	c = *a;

	*a = *b;
	*b = c;
}

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 24;

	ft_swap(&x, &y);
}
