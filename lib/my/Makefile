##
## Makefile for makefile in /home/galpin_a/rendu/Library/test
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Mon Nov  2 15:17:21 2015 Antoine Galpin
## Last update Thu Jan 21 00:01:39 2016 Galpin
##

SRCS  += my_putchar.c \
	 my_put_nbr.c \
	 my_putnbr_base.c \
	 my_putstr.c \
	 my_printf.c \
	 my_put_nbrU.c \
	 my_put_nbrX.c \
	 my_putstrS.c \
	 my_strlen.c \
	 my_isneg.c \
	 my_getnbr.c \
	 my_revstr.c \
	 my_sort_int_tab.c \
	 my_strcmp.c \
	 my_strcpy.c \
	 my_strdup.c \
	 my_strncmp.c \
	 my_strncpy.c \
	 my_strstr.c \
	 my_atoi.c \
	 my_swap.c \
	 option1.c \
	 option2.c \
	 option3.c \
	 binary.c \
	 get_next_line.c

NAME += libmy.a

OBJ += $(SRCS:.c=.o)

RM +=	rm -f

ECHO += echo -e

CC = gcc -c

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mLib created\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	$(RM) $(OBJ)
	$(RM) $(WAVE)

fclean:
	$(RM) $(NAME)

re: fclean all
