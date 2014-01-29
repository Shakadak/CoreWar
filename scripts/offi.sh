# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    go.sh                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibanez <jibanez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/26 13:54:07 by jibanez           #+#    #+#              #
#    Updated: 2014/01/26 15:50:39 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm fight_offi
../corewar/asm ../corewar/champions/$1.s
../corewar/asm ../corewar/champions/$2.s
../corewar/asm ../corewar/champions/$3.s
../corewar/arena/corewar_offi -b ../corewar/champions/$1.cor ../corewar/champions/$2.cor ../corewar/champions/$3.cor > fight_offi
rm ../corewar/champions/*.cor
echo "Done"
