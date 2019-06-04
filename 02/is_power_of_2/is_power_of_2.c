/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:36:11 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/03 17:06:43 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 2)
		return (1);
	if (n % 2 || n == 0)
		return (0);
	return (is_power_of_2(n / 2));
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	
	i = is_power_of_2(i);
	printf("%d\n", i);
}
