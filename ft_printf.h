/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:13:00 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/23 09:52:35 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *args, ...);
void	ft_putunsigned(unsigned int nbr, int fd);
void	ft_puthex_fd(int nbr, int to_upper, int fd);
int		ft_hexlen(int nbr);

#endif
