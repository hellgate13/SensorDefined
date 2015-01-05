#include "stdio.h"
#include "lib/lib.h"
#include "lib/define.h"

int main()
{

char menu = NULL;

menu :

Debug("Server State Select \n");
Debug("1 : start 2: stop        ");
scanf("%s",&menu);

switch(menu)
{
	case '1':
	Debug("start \n");
	break;
	case '2':
	Debug("stop \n");
	goto end;
	break;
	default:
	goto menu;
	break;
}

start:
	Debug("while\n");
	goto menu;
end :

return 0;

}
