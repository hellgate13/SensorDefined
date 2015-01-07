all : 
	@echo Sensor Defined Network Solution

commit :
	@git init
	@git add .
	@git commit -m ${UPDATE}
	@git remote add origin http://github.com/hellgate13/SensorDefined.git
	@git pust -u origin master
