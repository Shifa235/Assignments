#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
	
using namespace std;
int main(int argc,char *argv[])
			  
//int N,pid,status,sum;
//return 0;
				   
int N,i,pid,status,se;
pid= fork();
if(pid == 0)
{
i = N/2;
cout<<i<<endl;
}
else
{
waitpid;
if{
cout<<"child prints the odd numbers from 1 to N"<<endl;
cout<<"sum of odd no is"<<se<<endl;
}
else{
cout<<"parent print the even numbers from 1 to N"<<endl;
cout<<"sum of even no is"<<se<<endl;
}
									  
}
return 0;
}
