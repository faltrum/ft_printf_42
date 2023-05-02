/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:59:07 by oseivane          #+#    #+#             */
/*   Updated: 2023/05/02 18:23:36 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char				caracter;
	char				*string;
	void				*ptr;
	unsigned int		unumber;
	int					decimal;
	int					hexdecmin;
	int					hexdecmay;
	char				percent;
	int					ene;
	int					i;
	int					j;

	caracter = '\0';
	string = "La vida loca,loca,loca, MAria de la OOOOOOO";
	ptr = &caracter;
	unumber = -895569383;
	decimal = 1023452345;
	hexdecmin = -200000;
	hexdecmay = 999993452;
	percent = '%';
	ene = (int)ptr;
	i = ft_printf("%d\n", UINT_MAX);
	j = printf("%d\n", UINT_MAX);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un caracter y comparar con Printf original
	i = ft_printf("%c\n", caracter);
	j = printf("%c\n", caracter);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir una string y comparar con Printf original
	i = ft_printf("%s\n", string);
	j = printf("%s\n", string);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir una string NULL y comparar con Printf original
	i = ft_printf("%s\n", (char *)NULL);
	j = printf("%s\n", (char *)NULL);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un puntero y comparar con Printf original
	i = ft_printf("un puntero vacio: %pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	j = printf("un puntero vacio: %pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un unsigned int y comparar con Printf original
	i = ft_printf("%u\n", unumber);
	j = printf("%u\n", unumber);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un decimal en base 10 y comparar con Printf original
	i = ft_printf("%d\n", decimal);
	j = printf("%d\n", decimal);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un hexadecimal minusculas en base 16 y comparar con Printf original
	i = ft_printf("%x\n", hexdecmin);
	j = printf("%x\n", hexdecmin);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un hexadecimal may'usculas en base 16 y comparar con Printf original
	i = ft_printf("%X\n", hexdecmay);
	j = printf("%X\n", hexdecmay);
	printf("tamano: %d,  %d\n", i, j);
//Imprimir un % y comparar con Printf original
	i = ft_printf("%c\n", percent);
	j = printf("%c\n", percent);
	printf("tamano: %d,  %d\n", i, j);
	return (0);
}
