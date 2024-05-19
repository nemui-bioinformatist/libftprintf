NAME  = libftprintf.a

SRCS  = src/ft_printf.c\
		src/ft_treat_char.c\
		src/ft_treat_hexa.c\
		src/ft_treat_int.c\
		src/ft_treat_p.c\
		src/ft_treat_str.c\
		src/ft_treat_uint.c\

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft

LIBFT_NAME = libft.a

INCLUDES = include 

CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES)
		
all : $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		make -C $(LIBFT_PATH) all
		cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
		ar -rcs $(NAME) $(OBJS)	
		 
clean:
		rm -f $(OBJS)
		@make -C $(LIBFT_PATH) clean 

fclean: clean 
		rm -f $(NAME)
		rm -f $(LIBFT_PATH)/$(LIBFT_NAME)
		
re:  fclean all

.PHONY: all clean fclean re