/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnassar <lnassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:07:44 by lnassar           #+#    #+#             */
/*   Updated: 2024/10/28 12:03:56 by lnassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifie si le caractère est un chiffre

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c > 47 && c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}