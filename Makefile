NAME		=	libft.a

SRCS		=	ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c \
				ft_memcpy.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c \
				ft_strjoin.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c \
				ft_tolower.c ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c \
				ft_itoa.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c \
				ft_split.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c \
				ft_strrchr.c ft_substr.c ft_toupper.c

OBJS		=	$(SRCS:.c=.o)

BONUS		=	ft_lstnew.c ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstdelone.c \
				ft_lstlast.c ft_lstsize.c

BONUS_OBJS	=	$(BONUS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f


all			:	$(NAME)

$(NAME)		:	$(OBJS)
				ar rc $(NAME) $(OBJS)

bonus		:	$(OBJS) $(BONUS_OBJS)
				ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean		: 
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean $(NAME)

.PHONY		:	all clean fclean re bonus
