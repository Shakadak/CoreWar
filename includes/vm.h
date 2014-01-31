/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vm.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 15:11:36 by npineau           #+#    #+#             */
/*   Updated: 2014/01/31 15:45:34 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VM_H
# define VM_H

typedef struct		s_champ
{
	int				player;
	char			*name;
	char			*comment;
	char			*prog;
	struct s_champ	*next;
}					t_champ;

typedef struct		s_opt
{
	unsigned int	dump;
	t_champ			champ;
}					t_opt;

typedef union			u_dir
{
	unsigned short int	dir;
	char				c[2];
}						t_dir;

typedef union			u_ind
{
	unsigned int		ind;
	char				c[4];
}						t_ind;

#endif /* !VM_H */
