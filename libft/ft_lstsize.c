/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:02:25 by pnolte            #+#    #+#             */
/*   Updated: 2022/07/22 09:10:49 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 1;
	if (lst == NULL)
		return (0);
	while (lst ->next != NULL)
	{
		i++;
		lst = lst ->next;
	}
	return (i);
}
