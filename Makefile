# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/29 15:02:01 by npineau           #+#    #+#              #
#    Updated: 2014/01/31 15:54:39 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CoreWar
COR = corewar
ASM = asm

CC = gcc
FLAG = -Wall -Wextra -Werror -O3

CORSRC = main.c
CORDIR = virtual_machine

ASMSRC = main.c
ASMDIR = assembler

CORSPREF = $(addprefix $(CORDIR)/, $(CORSRC))
COROBJ = $(CORSRC:.c=.o)
COROPREF = $(addprefix $(OBJDIR)/, $(COROBJ))

ASMSPREF = 

DONE = \033[1;32mDone\033[0m

all: $(NAME)

$(NAME): $(ASM) $(COR)

$(ASM):
	@echo "Assembler: $(DONE)."
