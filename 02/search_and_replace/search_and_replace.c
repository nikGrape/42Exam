/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:14:12 by exam              #+#    #+#             */
/*   Updated: 2019/06/04 09:28:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STR argv[1][i]

int		main(int argc, char **argv)
{
	int i;

	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (STR)
	{
		while (STR == argv[2][0])
		{
			write(1, &argv[3][0], 1);
			i++;
		}
		if (!STR)
			break ;
		write(1, &STR, 1);
		i++;
	}
	write(1, "\n", 1);
}
