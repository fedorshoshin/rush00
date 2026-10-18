/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:13:44 by stevanya          #+#    #+#             */
/*   Updated: 2026/10/18 15:43:59 by feshoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(5, 1);
	write(1, "\n", 1);
	rush(4, 3);
	write(1, "\n", 1);
	rush(7, 6);
	return (0);
}

void	draw_bound(int ln)
{
	ln -= 2;
	write(1, "o", 1);
	while (ln > 0)
	{
		write(1, "-", 1);
		--ln;
	}
	write(1, "o\n", 2);
}

void	draw_body(int ln, int ht)
{
	int	i;

	while (ht > 0)
	{
		i = (ln - 2);
		write(1, "|", 1);
		while (i > 0)
		{
			write(1, " ", 1);
			--i;
		}
		write(1, "|\n", 2);
		--ht;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	draw_bound(x);
	y -= 2;
	while (y > 0)
	{
		draw_body(x, (y - 2));
		--y;
	}
	draw_bound(x);
}
