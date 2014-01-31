/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gather_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 14:37:26 by npineau           #+#    #+#             */
/*   Updated: 2014/01/31 15:07:01 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		init_dump(t_opt *new, int ac, char **av, int *i);
int			check_dump(char *src);

t_opt		*gather_options(int ac, char **av)
{
	t_opt	*new;
	int		i;

	i = 1;
	new = (t_opt *)malloc(sizeof(t_opt));
	init_opt(new);
	if (ft_strequ(av[1], "-dump"))
		init_dump(new, ac, av, &i);
	while
	{
	}
}

void		init_dump(t_opt *new, int ac, char **av, int *i)
{
	*i++;
	if (*i == av - 1)
	{
		free(new);
		ft_fatal(NULL);
	}
	else
	{
		if (check_dump(av[2]))
			new->dump = ft_atoi(av[2]);
		else
		{
			free(new);
			ft_fatal("Incorrect value for -dump option.");
		}
	}
}

int			check_dump(char *src)
{
	int		check;

	check = 1;
	while (check && *src)
		check = ft_isdigit((int)*src++);
	return (check);
}
