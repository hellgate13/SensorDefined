# PATH
LIBDIR = lib
OBJDIR = obj
SRCDIR = src
EXEDIR = bin

#ALL SOURCE
SRCS = *.c
OBJS = *.o

# VERSION
VERM = ALPHA.5.0
VERS = ALPHA.1.0

all :
	@echo This Makefile Version = ${VERM}
	@echo This Program Version = ${VERS}
	@make obj-link

lib-compile :
	@echo LIB COMPILE.
	
	@echo DONE.
 
main-compile :
	@echo OBJ COMPILE.
	
	@echo DONE.

obj-link : lib-compile main-compile
	@echo LINKING
	
	@echo DONE.

clean :
	rm -rf ${EXEDIR}
	rm -rf ${OBJDIR}
	mkdir ${EXEDIR}
	mkdir ${OBJDIR}

