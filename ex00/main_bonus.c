/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feshoshi <feshoshi@student.42yerevan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:59:46 by feshoshi          #+#    #+#             */
/*   Updated: 2026/10/18 20:02:50 by feshoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	atoi(char *str)
{
	int		o;
	char	c;

	o = 0;
	while (*str != '\0')
	{
		c = *str;
		if (c >= '0' && c <= '9')
		{
			o *= 10;
			o += (*str - '0');
		}
		str++;
	}
	return (o);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		return (0);
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	rush(x, y);
	return (0);
}
