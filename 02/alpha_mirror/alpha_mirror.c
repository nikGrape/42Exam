/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 18:57:41 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/04 19:26:18 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STR argv[1][i]

char		mirror(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ('z' + 'a' - ch);
	if (ch >= 'A' && ch <= 'Z')
		return ('A' + 'Z' - ch);
	return (ch);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (STR)
		{
			STR = mirror(STR);
			write(1, &STR, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
