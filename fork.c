#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int pid;
	int status=0;
	int i;

	for(i=1;i<=3;i++)
	{
	pid=fork();
	if(pid!=0)
	{
		printf("Parent's PID = %d\n",getpid());
		pid = wait(&status);
	}
	else
	{
		printf("Child's PID = %d\n",getpid());	
		exit(status);
	}
	printf("Runtime=%d\n",i);
	}
	return 0;
}	
