/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:59:07 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/24 14:36:18 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	int	*puntero;
	int	decimal;
	int	i;
	int	j;

	puntero = 785;
	i = ft_printf("%p\n", puntero);
	j = printf("%p\n", puntero);
	printf("tamano: %d,  %d\n", i, j);
	decimal = -8675;
	i = ft_printf("%d\n", decimal);
	j = printf("%d\n", decimal);
	printf("tamano: %d,  %d\n", i, j);
	return (0);
}
