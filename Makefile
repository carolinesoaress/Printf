NAME 		:= libftprintf.a
SOURCES 	:=	ft_printf.c \
				ft_printf_utils.c \
				
			
OBJECTS 		:= ${SOURCES:.c=.o}
CC 				:= cc
RM				:= rm -f
CFLAGS			:= -Wall -Wextra -Werror
AR				:= ar -rcs

all: ${NAME}

$(NAME): 	${OBJECTS}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@
			${AR} ${NAME} $@

clean: 
			${RM} ${OBJECTS} 
			
fclean: clean 
			${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all bonus