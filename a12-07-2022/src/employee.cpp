#include<iostream>
#include<fstream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

using namespace std;

int main()
{
	int n,E;
	fstream f;
	cout<<"enter How many Employee:";
	cin>>n;
	Employee *E=new Employee[n];
	int pid;
	pid = fork();
	if(pid = 0)
	{
		cout<<"child starts"<<endl;
		f.open("emp.txt",ios::out);
		if(!f)
		{
			cout<<"unable to open the files"<<endl;
			exit(0);
		}
		for(int i=0;i<n;i++)
		{
			E[i].getEmpdetails();
			f.write(reinterpret_cast<char*>(&E[i]),sizeof(Employee));
		}
		f.close();
		}
		cout<<"child terminates"<<endl;
		}
                else(wait 0)
		{
		cout<<"parent starts"<<endl;
		
		f.open("emp.txt,ios::in");
		if(!f)
		{
	{
                cout<<"unable to open the details"<<endl;
		exit(0);
		}
		cout<<"parent Employee details"<<endl;
		for(int i=0;i<n;i++)
		{
			e[i].display();
		f.read(reinterpret_cast<char *>(&E[i]),sizeof(Employee));
		}
		f.close();
		cout<<"parent terminate"<<endl;
		}
	
	return 0;
}

