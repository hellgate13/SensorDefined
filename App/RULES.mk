SRCS = *.c
OBJS = *.o
VER = ALPHA.5.2.0
CC = gcc
DEP_FILE = dep_file
CLEAN_OPTION = 

version : 
	@echo this Makefile is ${VER}

.c.o : ${SRCS}
	@echo COMPILE 
	${CC} -c ${SRCS}
	@echo OBJECT CREATE
	mv ${OBJS} ../${OBJDIR}/. 

dep : ${SRCS}
	@echo DEPENDS LIST > ${DEP_FILE}
	${CC} -MM ${SRCS} > ${DEP_FILE}

clean :
	@echo CLEAN_${CLEAN_OPTION}
	rm -rf ${CLEAN_OPTION}
