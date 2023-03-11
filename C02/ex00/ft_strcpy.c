/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:20:01 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 20:11:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			dest[i] = src[i];
		}
	}
}
/*int	main()
{
	int	f;
	char	a[] = "ola";
	char	b[4];
	ft_strcpy(b, a);
	
	f = 0;
	while(b[f] != '\0')
        {
                printf("%c", b[f]);
                f++;
        }
	return 0;

}*/
