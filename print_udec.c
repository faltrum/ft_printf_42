/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_udec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:06:20 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/27 11:07:22 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_udec(unsigned int n)
{
	char	*str;
	int		leng;

	str = ft_convert_ubase(n, "0123456789");
	leng = print_string(str);
	free (str);
	return (leng);
}
