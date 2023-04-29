/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:07:46 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 17:35:25 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *p)
{
	char				*str;
	unsigned long long	pnb;
	char				*new;
	int					leng;

	pnb = (unsigned long long)p;
	str = ft_convert_ptr(pnb, "0123456789abcdef");
	new = ft_strjoin("0x", str);
	if (write(1, "0x", 2) < 0)
		return (-1);
	leng = print_string(str);
	free(str);
	free(new);
	return (leng + 2);
}
