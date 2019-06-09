/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:39:08 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/08 13:45:59 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
