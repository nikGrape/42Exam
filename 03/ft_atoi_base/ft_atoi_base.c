/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:08:47 by vinograd          #+#    #+#             */
/*   Updated: 2019/06/03 19:04:49 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid(char ch, int base)
{
	char arr1[] = "0123456789abcdef";
	char arr2[] = "0123456789ABCDEF";

	while (base >= 0)
	{
		if (ch == arr1[base] || ch == arr2[base])
			return (base + 1);
		base--;
	}
	return (0);
}
int		convert(char ch)
{
	int i;

	i = valid(ch, 15);
	return (i - 1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int res;

	i = 0;
	while ((str[i] > 8 && str[i] < 20) || str[i] == ' ')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	res = 0;
	while(valid(str[i], str_base) && str[i])
		res = res * str_base + convert(str[i++]);
	return (res * sign);
}
