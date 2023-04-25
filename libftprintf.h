/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:30:27 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/25 16:32:25 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define  LIBFTPRINTF_H
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void			ft_add_str(char *str, char caracter);
void			ft_bzero(void *s, size_t n);
char			*ft_convert_base(int n, char *base);
char			*ft_convert_ptr(unsigned long long n, char *base);
char			*ft_convert_ubase(unsigned int n, char *base);
unsigned int	ft_number_size(int number);
int				ft_printf(const char *string, ...);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strlen(const char *str);
int				print_char(char c);
int				print_hex_may(int n);
int				print_hex_min(int n);
int				print_nb(int n);
int				print_ptr(unsigned long long p);
int				print_string(char *str);
int				print_udec(unsigned int n);

#endif