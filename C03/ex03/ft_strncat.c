/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:19:00 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/28 17:42:11 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned	int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while ((b < nb) && (src[b] != '\0'))
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "arrivee";
	char	dest[20] = "depart";
	unsigned int i = 5;

	printf("%c\n", ft_strncat(dest, src, 20)[19]);
	printf("%c", strncat(dest, src, 20)[19]);
	return (0);
}
