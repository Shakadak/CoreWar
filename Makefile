# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/29 15:02:01 by npineau           #+#    #+#              #
#    Updated: 2014/01/29 15:15:24 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CoreWar

COR = corewar

ASM = asm

CORSRC = main.c

CORDIR = virtual_machine

ASMSRC = main.c

ASMDIR = assembler

CORSPREF = $(addprefix $(CORDIR)/, $(CORSRC))

COROBJ = $(CORSRC:.c=.o)

COR

ASMPREF = 
