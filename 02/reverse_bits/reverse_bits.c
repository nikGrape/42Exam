/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:39:26 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/08 16:21:36 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	res = 0;
	i = 0;
	while (i < 8)
	{
		res = res << 1;
		res = res | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (res);
}
