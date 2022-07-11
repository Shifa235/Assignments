#include<iostream>
#include<string>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

using namespace std;
int main()
{
int i,N,status,sum;
pid_t pid;

pid = fork();
if(pid == 0)
{
for(i=1;i<N;i++)
if(i%2 == 0)
cout<<"even \t%d\n",i;
cout<<"sum even"<<endl;
}
else
{
if(pid > 0)
pid= waitpid(pid, &status, 0);
for(i=1;i<N;i++)
if(i%2 != 0)
cout<<"odd %d\n",i;
cout<<"sum odd"<<endl;
}
}
