##
## Makefile for azert in /home/galpin_a/galpin_a/rendu/infographie/test
## 
## Made by Galpin
## Login   <galpin_a@epitech.net>
## 
## Started on  Wed Nov 18 15:58:45 2015 Galpin
## Last update Thu Jan 21 19:14:38 2016 Galpin
##

DIR	+= lib/my
DIR2	+= src/ 

ECHO	+= echo -e

all:
	cd $(DIR); make
	cd $(DIR2); make

clean:
	cd $(DIR); make clean
	cd $(DIR2); make clean

fclean:
	cd $(DIR); make fclean
	cd $(DIR2); make fclean

re:
	cd $(DIR); make re
	cd $(DIR2); make re
