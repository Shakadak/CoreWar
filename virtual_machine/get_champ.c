/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_champ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 18:16:52 by npineau           #+#    #+#             */
/*   Updated: 2014/01/29 18:25:42 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

t_clst	*get_champ(t_clst *begin, int num)
{
	if (num > 0)
		return (get_champ(begin->next, num - 1));
	else
		return (begin);
}
