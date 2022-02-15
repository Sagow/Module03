SRCS	=	main.cpp\
			ClapTrap.cpp

OBJS	=	${SRCS:.cpp=.o}

C		=	c++

FLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME	=	ex00

RM		=	rm -rf

all :	${NAME}

%.o: %.cpp
			${C} ${FLAGS} -o $@ -c $<

${NAME} :	${OBJS}
			${C} ${FLAGS} -o ${NAME} ${OBJS}

clean :
			${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

.PHONY : ${NAME} all clean fclean re