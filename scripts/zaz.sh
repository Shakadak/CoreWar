# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    go.sh                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibanez <jibanez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/26 13:54:07 by jibanez           #+#    #+#              #
#    Updated: 2014/01/26 16:03:09 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm fight_offi
../corewar/asm ../corewar/champions/$1.s
../corewar/asm ../corewar/champions/$2.s
../corewar/asm ../corewar/champions/$3.s
../corewar/zaz/corewar_zaz -n ../corewar/champions/$1.cor ../corewar/champions/$2.cor ../corewar/champions/$3.cor
rm ../corewar/champions/*.cor
echo "Done"
