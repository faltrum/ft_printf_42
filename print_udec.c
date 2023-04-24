/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_udec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:06:20 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/24 10:18:11 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_udec(unsigned int n)
{
	char	*str;
	int		leng;

	str = ft_convert_base(n, "0123456789");
	leng = print_string(str);
	free (str);
	return (leng);
}
