##
## Makefile for azert in /home/galpin_a/galpin_a/rendu/infographie/test
## 
## Made by Galpin
## Login   <galpin_a@epitech.net>
## 
## Started on  Wed Nov 18 15:58:45 2015 Galpin
## Last update Sun Jan 24 11:09:34 2016 galpin
##

NAME		= mysh

LDFLAGS		+= ../lib/libmy.a

SRCS		+=  main.c \
		    get_next_line.c \
		    my_str_to_wordtab.c \
		    my_str_to_wordtab2.c \
		    options.c \
		    double_array.c \
		    my_cd.c \
		    my_atoi.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc -g3

ECHO		+= echo -e

RM		= rm -f

MV		= mv mysh ..

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)
	$(MV)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mAll compiled\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	$(RM) $(OBJS)
	@$(ECHO) '\033[01;31m---------------\033[01;31m->\033[01;33mAll cleaned\033[01;31m<-\033[01;31m----------------\033[01;00m'

fclean: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[01;36m---------------\033[01;36m->\033[01;36mBinary clean\033[01;36m<-\033[01;36m---------------\033[01;00m'

re: fclean all

.PHONY: all clean fclean re
