#include <signalhandling.h>

static void func1(int signum)
{
	switch(signum)
	{
		case SIGSEGV:
		cout<<"sig number:"<<signum<<endl;
		cout<<"seg fault error occured:"<<endl;
		exit(EXIT_FAILURE);
		break;

		case SIGUSR1:
		cout<<"Welcome User!"<<endl;
		break;
		default:
		cout<<"unhandled signal:"<<endl;
	}
}
void mystrcat(char *str1, char *str2)
{
	int i;
	       signal(SIGSEGV,func1);
	       //str1=new char[strlen(Str2)];
	       for(i=0;i<strlen(str2);i++)
	       {
		       str1[i]=str2[i];
		       str1[i]='\0';
	       }
}

int main()
{
	sighandler_t ret = signal(SIGUSR1, func1);
	signal(SIGHUP, func1);

	if(ret == SIG_ERR)
	{
		perror("Signal() error");
		exit(EXIT_FAILURE);
	}
	if(raise(SIGUSR1)!=0)
	{
		perror("raise() error");
		exit(EXIT_FAILURE);
	}
	char*str1, str2[20];
	cin>>str2;
	char* str3 = NULL;
	str1= new char[strlen(str2)+1];

	mystrcat(str1,str3);
	cout<<"string1;"<<str1<<endl;
	cout<<"string2:"<<str2<<endl;
return EXIT_SUCCESS;
}

