
#include <nuttx/config.h>

#include <sys/ioctl.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


#include <fcntl.h>
#include <sched.h>
#include <errno.h>
#include <nuttx/fs/fs.h>
#include <nuttx/leds/userled.h>
#include <nuttx/board.h>
#include <sys/boardctl.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/time.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <termios.h>
#include <strings.h>
#include <errno.h>
#include <debug.h>

#include "task_gprs.h"
#include "task_monitor.h"
#include "task_flash.h"
#include "task_wdt.h"

/****************************
*new add by liubofei 
*for to control external watchdog
*2018-01-29
***************************/

int master_wdt(int argc, char *argv[])
{
#if 1
	while(1)
	{
			boardctl(BOARDIOC_EXT_WDT_PWRON, 0);
		//	printf("\n----------wdt pwron-----------\n");
			usleep(1000*1000);//1s

			boardctl(BOARDIOC_EXT_WDT_PWROFF, 0);
		//	printf("\n----------wdt pwroff-----------\n");
			usleep(1000*1000);//1s
	}
#else
//for to test
	int i =0;
	while(i<100)
	{
			printf("\n\n\n\n\n\ni = %d\n\n\n\n\n\n",i);
			boardctl(BOARDIOC_EXT_WDT_PWRON, 0);
		//	printf("\n----------wdt pwron-----------\n");
			usleep(50*1000);//50ms

			boardctl(BOARDIOC_EXT_WDT_PWROFF, 0);
		//	printf("\n----------wdt pwroff-----------\n");
			usleep(50*1000);//50ms
			
			i++;
	}
#endif
	return 0;
}
