/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:11:07 by saxiao            #+#    #+#             */
/*   Updated: 2017/12/21 17:50:47 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <wchar.h>
#include "../libft/libft.h"
#include "../includes/ft_printf.h"

char	*ft_strnchr(const char *s, int c, int size)
{
	while (c != *s && *s && size > 0)
	{
		s++;
		size--;
	}
	if (c == *s)
		return ((char *)s);
	else
		return (NULL);
}

int		ft_strnchr_double(const char *s, int c, int size)
{
	int		i;

	i = 0;
	while (c != *s && *s && size > 0)
	{
		s++;
		size--;
	}
	while (c == *s && *s && size > 0)
	{
		i++;
		s++;
		size--;
	}
	if (i % 2)
		return (0);
	else
		return (1);
}

void	ft_putnstr(char *s, int nbr)
{
	if (s)
	{
		while (*s && nbr-- >= 1)
			write(1, s++, 1);
	}
}

void	ft_putnwstr(wchar_t *s, int nbr)
{
	if (s)
	{
		while (*s && nbr-- >= 1)
			ft_putwchar(*s++);
	}
}

void	ft_putnchar(char c, int nbr)
{
	while (nbr-- >= 1)
		write(1, &c, 1);
}
