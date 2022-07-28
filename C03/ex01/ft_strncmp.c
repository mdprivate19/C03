/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:31:06 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/28 17:37:49 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((a < n) && (s1[a] != '\0' || s2[a] != '\0'))
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char a[] = "aaaac";
	char b[] = "bbbbc";

	printf("%d", ft_strncmp(a, b, 0));
	printf("%d", strncmp(a, b, 5));
}
