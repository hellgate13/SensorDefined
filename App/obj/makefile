CC = gcc
CFLAG = -o
OBJS = *.o
TARGET = app

include ../DIR.mk

link :
	@echo LINK START
	@${CC} ${CFLAG} $@.$@ ${OBJS}
	@echo BIN FILE CREATE
	@mv $@.$@ ../${BINDIR}/${TARGET}.run
