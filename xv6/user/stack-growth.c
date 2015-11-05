#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int C(int);
int D(int);
int B(int);
int  A(int temp){
	if(temp==10){printf(1,"A got value correctly\n");}
	printf(1,"in A address of var =%d\n",&temp);
	if(B(11)==12){printf(1,"B returned correctly\n");}
	return temp+1;
}

int  B(int temp){
	if(temp==11){printf(1,"B got value correctly\n");}
	printf(1,"in B address of var =%d\n",&temp);
	if(C(12)==13){printf(1,"C returned correctly\n");}
	return temp+1;
}

int  C(int temp){
	if(temp==12){printf(1,"C got value correctly\n");}
	printf(1,"in C address of var =%d\n",&temp);

	if(D(13)==14){printf(1,"D returned correctly\n");}
	return temp+1;
}

int  D(int temp){
	if(temp==13){printf(1,"D got value correctly\n");}
	printf(1,"in D address of var =%d\n",&temp);
	return temp+1;
}

void overflow_stack(){
	int a[1024];
	int i;
	for(i=0;i<1024;i++)
		a[i] = i;
	int b[1024];

	for(i=0;i<1024;i++)
			b[i] = i;
	for(i=0;i<1024;i++)
			printf(1,"addr-%d val-%d,",&b[i],b[i]);
	printf(1,"\n");
	printf(1,"\n");
	for(i=0;i<1024;i++)
				printf(1,"addr-%d val-%d,",&a[i],a[i]);

}
int
main(int argc, char *argv[])
{
 if(A(10)==11){printf(1,"A returned correctly\n");}
 overflow_stack();
  exit();
}
