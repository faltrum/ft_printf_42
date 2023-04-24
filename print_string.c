/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:05:51 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/20 10:27:08 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_string(char *str)
{
	int	i;
	int	error;

	i = 0;
	while (str[i] != '\0')
	{
		error = print_char(str[i]);
		if (error == -1)
			return (error);
		i++;
	}
	return (i);
}
