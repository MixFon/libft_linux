/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_un_dimension.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 09:29:39 by widraugr          #+#    #+#             */
/*   Updated: 2019/02/08 09:40:37 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Defines the dimension of the modifier size (unsigned o, u, x, X)
*/

uintmax_t	ft_check_un_dimension(t_format *lst, va_list lst_arg)
{
	uintmax_t	arg;

	arg = va_arg(lst_arg, uintmax_t);
	if (lst->size[0] == 'h' && lst->size[1] == '\0')
		arg = (unsigned short int)arg;
	else	if (lst->size[0] == 'h' && lst->size[1] == 'h')
		arg = (unsigned char)arg;
	else	if (lst->size[0] == 'l' && lst->size[1] == '\0')
		arg = (unsigned long)arg;
	else	if (lst->size[0] == 'l' && lst->size[1] == 'l')
		arg = (unsigned long long int)arg;
	else	if (lst->size[0] == 'j' && lst->size[1] == '\0')
		arg = (uintmax_t)arg;
	else	if (lst->size[0] == 'z' && lst->size[1] == '\0')
		arg = (size_t)arg;
	else
		arg = (unsigned int)arg;
	return (arg);
}
