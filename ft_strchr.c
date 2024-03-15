/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:34:12 by saandria          #+#    #+#             */
/*   Updated: 2024/03/09 14:37:34 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(char *s, int c)
{
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*(char *)s == (char)c)
			return ((char *) s);
		s++;
	}
	if (*(char *)s == (char)c)
		return ((char *)s);
	return (NULL);
}
