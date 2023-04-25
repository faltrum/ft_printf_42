/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:59:07 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/25 16:22:59 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	unsigned int	entero;
	int	i;
	int	j;

	entero = -89556;
	i = ft_printf("%u\n", entero);
	j = printf("%u\n", entero);
	printf("tamano: %d,  %d\n", i, j);
	return (0);
}
