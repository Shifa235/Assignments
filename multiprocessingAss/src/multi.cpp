#include <multi.h>
using namespace std;
int main(int argc, char *argv[])
{
	  fstream fin;
	  char *buf=argv[1];
	  int pid;
	  pid = fork();
	  if(pid == 0)
	  {
	  string line;
	  fin.open(buf,ios::out);
	  if(fin.is_open())
	  {
     cout <<"Enter the contents to add to the file, $ will be EOF"<<endl;
     string s;
          getline(cin,s,'$');
	  fin<<s<<endl;
	  fin.close();
	  }
	  cout<<"children PID: "<<getpid()<<endl;
	  cout<<"children PPID: "<<getppid()<<endl;
	  }
	  else
          {
          if(pid>0)
	  {
	  wait((int *)0);
	  string line;
	  fin.open("text.dat",ios::in);
	  if(fin.is_open())
          {
     while(getline(fin,line))
     {

	  cout<<line<<endl;
     }

     fin.close();
	  }
          cout<<"Parent PID: "<<getpid()<<endl;
          cout<<"Parent PPID: "<<getppid()<<endl;
          }
          }
     return 0;
}     
              
