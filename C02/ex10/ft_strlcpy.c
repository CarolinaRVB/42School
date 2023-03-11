/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:18:38 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 20:02:40 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';	
}
/*int	main()
{
	char	a[] = "ololaolaa";
	char	b[4];
	int	n;
	n = 4;

	ft_strlcpy(b, a, n);

	printf("%s\n", b);

	return 0;
}*/
