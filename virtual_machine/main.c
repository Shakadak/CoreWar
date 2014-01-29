/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 14:53:50 by npineau           #+#    #+#             */
/*   Updated: 2014/01/29 15:01:46 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "op.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{/* might need to create usage function */
		write(1, "usage: ./corewar [-dump nbr_cycles] ", 36);
		write(1, "[[-n number] champion1.cor] ...\n", 32);
	}
	return (0);
}
