/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 18:28:27 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/04 18:53:52 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define STR argv[1]

int delta(char ch)
{
	if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch < 'Z'))
		return (1);
	if (ch == 'z' || ch == 'Z')
		return (-25);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
		while (STR[i])
		{
			STR[i] += delta(STR[i]);
			write(1, &STR[i++], 1);
		}
	write(1, "\n", 1);
}
