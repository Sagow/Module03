SRCS	=	main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp

OBJS	=	${SRCS:.cpp=.o}

C		=	c++

FLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME	=	ex03

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

re :		fclean all

.PHONY : ${NAME} all clean fclean re