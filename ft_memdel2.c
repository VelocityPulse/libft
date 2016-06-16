/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 16:59:53 by cchameyr          #+#    #+#             */
/*   Updated: 2016/06/16 17:10:48 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_memdel2(void ***ap)
{
	int		i;

	if (ap != NULL)
	{
		i = -1;
		while (*ap[++i])
			ft_memdel((void **)&(*ap[i]));
		free(*ap);
		*ap = NULL;
	}
}

/* a tester */
