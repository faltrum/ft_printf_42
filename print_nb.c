/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:06:35 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/24 12:42:15 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_nb(int n)
{
	char	*str;
	int		leng;

	str = ft_convert_base(n, "0123456789");
	leng = print_string(str);
	free (str);
	return (leng);
}