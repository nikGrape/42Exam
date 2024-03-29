/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:36:11 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/08 16:31:42 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n % 2 == 0)
		return (is_power_of_2(n / 2));
	return ((n == 1) ? 1 : 0);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = atoi(argv[1]);
		printf("%d\n", is_power_of_2(i));
	}
}
