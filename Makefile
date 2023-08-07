SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strlcpy.c ft_strlcat.c 
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)
	
re:			fclean all

#作りたいもの: 材料
#	作り方
