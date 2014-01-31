/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 14:53:50 by npineau           #+#    #+#             */
/*   Updated: 2014/01/31 15:32:04 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "op.h"
#include "vm.h"

int	main(int argc, char **argv)
{
	t_opt	*options;
	t_vm	*vm;
	if (argc == 1)
	{/* might need to create usage function */
		write(1, "usage: ./corewar [-dump nbr_cycles] ", 36);
		write(1, "[[-n number] champion1.cor] ...\n", 32);
	}
	else
	{
		options = gather_options(argc, argv);
		vm = init_vm(options);
		run_vm(vm, options);
	}
	return (0);
}
