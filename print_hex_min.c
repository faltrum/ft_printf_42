/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:01:23 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/24 10:17:27 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hex_min(int n)
{
	char	*str;
	int		leng;

	str = ft_convert_base(n, "0123456789abcdef");
	leng = print_string(str);
	free (str);
	return (leng);
}
