/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:12:02 by yba               #+#    #+#             */
/*   Updated: 2023/01/26 12:46:07 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = libftprintf.a

SRCS = \
	ft_printf.c \
	src/base.c \
	src/iscors.c \
	src/ishex.c \
	src/isintp.c \
	src/utils.c \

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}


$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
