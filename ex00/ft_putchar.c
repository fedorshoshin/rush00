/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:13:44 by stevanya          #+#    #+#             */
/*   Updated: 2026/10/18 12:54:06 by stevanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	rush(3, 5);
	rush(1, 1);
	rush(1, 5);
	rush(5, 1);
	return(0);
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	c;

	if (x <= 0 || y <= 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0 || j == y - 1)
			{
				if (i == 0 || i == x - 1)
					c = 'o';
				else
					c = '-';
			}
			else
			{
				if (i == 0 || i == x - 1)
					c = '|';
				else
					c = ' ';
			}
			write (1, &c, 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
