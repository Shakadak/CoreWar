/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gather.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 14:50:05 by npineau           #+#    #+#             */
/*   Updated: 2014/01/26 12:34:23 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assembler.h"

void	gather(t_clst **tokens, int fd)
{
	char	*line;
	int		ret;

	line = (char *)malloc(sizeof(char) * BUFFSIZE);
	while ((ret = get_next_line(&line, fd)) != 0)
	{
		if (ret == -1)
			ft_exit("Error while reading file");
		
