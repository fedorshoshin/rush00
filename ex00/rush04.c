/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:13:44 by stevanya          #+#    #+#             */
/*   Updated: 2026/10/18 18:55:38 by feshoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_bound(int ln, char l, char r)
{
	ln -= 2;
	ft_putchar(l);
	while (ln > 0)
	{
		ft_putchar('B');
		--ln;
	}
	if (ln == 0)
	{
		ft_putchar(r);
	}
	ft_putchar('\n');
}

void	draw_body(int ln, int ht, char b)
{
	int	i;

	while (ht > 0)
	{
		i = (ln - 2);
		ft_putchar(b);
		while (i > 0)
		{
			ft_putchar(' ');
			--i;
		}
		if (i == 0)
		{
			ft_putchar(b);
		}
		ft_putchar('\n');
		--ht;
	}
}

void	rush(int x, int y)
	{
	if (x <= 0 || y <= 0)
		return ;
	draw_bound(x, 'A', 'C');
	draw_body(x, (y - 2), 'B');
	if (y != 1)
		draw_bound(x, 'C', 'A');
}
