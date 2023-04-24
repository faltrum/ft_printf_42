/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:07:46 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/24 12:43:49 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_ptr(unsigned long long p)
{
	char	*str;
	char	*new;
	int		leng;

	str = ft_convert_ptr(p, "0123456789abcdef");
	new = ft_strjoin("0x", str);
	leng = print_string(new);
	free(str);
	free(new);
	return (leng);
}
