NAME  = libftprintf.a

SRCS  = ft_printf.c\
		ft_treat_char.c\
		ft_treat_hexa.c\
		ft_treat_int.c\
		ft_treat_p.c\
		ft_treat_str.c\
		ft_treat_uint.c

OBJS  = $(SRCS:.c=.o)

LIBFT_PATH = ./libft

LIBFT_NAME = libft.a

INCLUDES = include

CC    = cc

CFLAG = -Wall -Wextra -Werror -I include

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH) all
	cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	ar -rcs $(NAME) $(OBJS)
	
all: $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o) -I $(INCLUDES)

clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)/$(LIBFT_NAME)

re: fclean all

.PHONY : all clean fclean re