SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strlcpy.c ft_strlcat.c 
OBJS	= $(srcs:.c=.o)
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all:	 	$(NAME)
$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean:		clean
	$(RM) $(NAME)


#作りたいもの: 材料
#	作り方
