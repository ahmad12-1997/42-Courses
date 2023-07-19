# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/08 16:31:11 by akanbari          #+#    #+#              #
#    Updated: 2023/07/18 18:34:36 by akanbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS = -Wall -Wextra -Werror -I.
# -Wall (enable all compiler warnings), -Wextra (enable extra compiler warnings), -Werror (treat warnings as errors), and -I. (include the current directory).

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strmapi.c  \
 		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strtrim.c  \
  		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c ft_split.c ft_striteri.c \
   		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  \
    	ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c  \
	 	ft_strjoin.c ft_strtrim.c ft_strncmp.c ft_itoa.c ft_putchar_fd.c  \
	  	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c

SRC_BONUS = ft_lstadd_front.c ft_lstclear.c ft_lstnew.c ft_lstlast.c \
			ft_lstsize.c ft_lstmap.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c
CC = cc
RM = rm -f
NAME = libft.a
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
	@echo "Removing old objects."
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:
	@echo "Removing old objects and libraries..."
	$(RM) $(OBJS) $(NAME) $(OBJS_BONUS)

re: fclean all

bonus : $(OBJS_BONUS) $(OBJS)
	@echo "Bonus"
	ar rcs $(NAME) $(OBJS_BONUS) $(OBJS)

.PHONY:	all clean fclean re bonus