/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembler.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 13:59:58 by npineau           #+#    #+#             */
/*   Updated: 2014/01/24 17:09:19 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSEMBLER_H
# define ASSEMBLER_H

typedef struct		s_clst
{
	char			*token;
	int				type;
	struct s_clst	next;
}					t_clst;

void	translate(char *file);
void	gather(t_clst **tokens);
int		tokenize(char *token);

#endif
