REMOTE = origin
USER = master

all : 
	@echo Sensor Defined Network Solution

commit :
	@git init
	@git add --all .
	@git commit -m ${UPDATE}
#	@git remote add origin http://github.com/hellgate13/SensorDefined.git
	@git push -u ${REMOTE} ${USER}

remote :	
	@git remote add ${REMOTE} http://github.com/hellgate13/SensorDefined.git
