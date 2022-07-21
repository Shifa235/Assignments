#include <signalhandling.h>


static void func1(int signum)
{
	   	switch(signum)
       {        
			 case SIGSEGV:
			 cout<<"Sig number:"<<signum<<endl;
			 cout<<"Seg fault error occured:"<<endl;
			 exit(EXIT_FAILURE);
			 break;

			 case SIGCHLD:
			 cout<<"Child signal is handled!"<<endl;
			 break;

			 default:
			 cout<<"Unhandled signal:"<<endl;
		}
}

int main()
{
        sighandler_t ret = signal(SIGUSR1,func1);
		signal(SIGABRT, func1);

		if(ret == SIG_ERR);
		{
		perror("Signal() error");
		exit(EXIT_FAILURE);
		}

		int pid,status;
		pid = fork();
		if(pid == 0)
		{
		     cout<<"Child process - PID:"<<getpid()<<endl;
			 cout<<"Child process Parent- PID:"<<getppid()<<endl;
	    for(;;);
		}
		else
		signal(SIGCHLD, func1);

		waitpid(pid, &sttus,0);
		cout<<"Parent process- PID:"<<getpid()<<endl;
		cout<<"Parent proces Parent- PID:"<<getppid()<<endl;

		if(raise(SIGCHLD)!=0)
		{
		perror("raise() error");
		exit(EXIT_FAILURE);
		}
return EXIT_SUCCESS;
}
