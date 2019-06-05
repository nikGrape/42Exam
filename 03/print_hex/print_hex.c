/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:43:00 by exam              #+#    #+#             */
/*   Updated: 2019/06/04 14:30:59 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(int i)
{
	char nums[] = "0123456789abcdef";
	write(1, &nums[i], 1);
}

void	puthex(int i)
{
	if (i >= 16)
		puthex(i / 16);
	convert(i % 16);
}

int		ft_atoi(char *s)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	while (s[i] > 8 && s[i] < 33)
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while ((s[i] >= '0' && s[i] <= '9') && s[i])
		res = res * 10 + (s[i++] - '0');
	return (res * sign);
}

int		main(int argc, char **argv)
{
	int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		puthex(num);
	}
	write(1, "\n", 1);
	return (0);
}
