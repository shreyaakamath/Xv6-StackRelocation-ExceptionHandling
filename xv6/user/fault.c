#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int
main(int argc, char *argv[])
{
//printf(1,"%d",*p);
	 char *p = (char *)((640 *1024)-(2*4096));
	 printf(1,"addr of p:%d\n",p);
	 printf(1,"val =%d",*p);
      exit();

}
