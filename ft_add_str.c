/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:46:00 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/20 10:58:58 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_add_str(char *str, char caracter)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = caracter;
}
