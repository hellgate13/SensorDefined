include DIR.mk

CLEAN_OPTION = *.o *.link *.run

all : install

install : dep compile link

compile :	
	@echo SOURCE COMPILE
	@cd ./${SRCDIR} && make
	@cd ./${LIBDIR} && make
	@echo DONE.

link :
	@echo LINK BINARY FILE
	@cd ./${OBJDIR} && make $@
	@echo DONE.

clean :
	@echo CLEAN DIRECTORY
	@cd ./${SRCDIR} && make $@
	@cd ./${LIBDIR} && make $@
	@cd ./${OBJDIR} && rm -rf ${CLEAN_OPTION}
	@cd ./${BINDIR} && rm -rf ${CLEAN_OPTION}
	@echo DONE.

dep :
	@echo DEPENDS FILE
	@cd ./${SRCDIR} && make $@
	@cd ./${LIBDIR} && make $@
	@echo DONE.	

run :
	@echo PROGRAME START 
	@cd ./${BINDIR} && ./*.run
	@echo DONE.
