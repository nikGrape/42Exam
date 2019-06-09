/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:06:22 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/08 17:14:57 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	char ch;

	if (i >= 10)
		ft_putnbr(i / 10);
	ch = i % 10 + '0';
	write(1, &ch, 1);
}

int main(int argc, char **argv)
{
	if (argv != NULL)
		ft_putnbr(argc - 1);
	write (1, "\n", 1);
}
