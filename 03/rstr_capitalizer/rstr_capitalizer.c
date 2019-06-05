/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:57:46 by exam              #+#    #+#             */
/*   Updated: 2019/06/04 18:06:07 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STR argv[words]

int		is_spase(char ch)
{
	if ((ch > 8 && ch < 20) || ch == ' ')
		return (1);
	return (0);
}

int		is_low(char ch)
{
	if (ch >= 'a' && ch <='z')
		return (1);
	return (0);
}
int		is_up(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int words;
	int i;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	words = 1;
	while (words < argc)
	{
		i = 0;
		while (STR[i])
		{
			if (is_up(STR[i]))
				STR[i] += 32;
			i++;
		}
		while (i > 0)
		{
			while (!is_low(STR[i]) && i > 0)
				i--;
			if (is_low(STR[i]))
				STR[i--] -= 32;
			while (!is_spase(STR[i]) && i > 0)
				i--;
		}
		ft_putstr(STR);
		write(1, "\n", 1);
		words++;
	}
}
