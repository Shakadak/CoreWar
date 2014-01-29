/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 17:14:12 by npineau           #+#    #+#             */
/*   Updated: 2014/01/29 18:16:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"
#include "vm.h"

t_vm	*init_vm(t_vm *vm, t_opt *options)
{
	t_vm	new;
	int		champ;

	champ = 0;
	new->mem_array = malloc(MEMSIZE);
	new->cycle = 0;
	new->cycle_to_die = CYCLE_TO_DIE;
	new->max_live = 0;
	while (champ++ < options->max_champ)
		copy_champ(champ, max_champ, new, options);
	return (new);
}
