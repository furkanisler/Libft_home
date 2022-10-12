/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:34:53 by misler            #+#    #+#             */
/*   Updated: 2022/10/13 01:44:20 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return (NULL);
	if (!lst)
	{
		*lst = new;
		return (NULL);
	}
	new->next = *lst;
	*lst = new;
}
