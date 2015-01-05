COMPILER = gcc
OBJ = server
LIB = 
LDFLAGS = -lpthread
VERM = ALPHA.1
VERS = ALPHA

all : 
	@echo Makefile ver ${VERM}
	@make install
	
install :
	@echo Server Compile
	@echo Server Ver ${VERS}
	@echo Make Object File
	@${COMPILER} -c ${OBJ}.c -o ${OBJ}.o
	@echo Done.
	@echo File Linking
	@${COMPILER} -o ${OBJ} ${OBJ}.o ${LDFLAGS}
	@echo Done.
	@mv ${OBJ}.o ./obj/.
	@echo Install Done.

run: 
	@echo Running
	@./server


remove :
	@echo Remove Server
	@rm -rf *.o
	@rm -rf server
	@echo Remove Done.

edit :
	@vi ${OBJ}.c	 
