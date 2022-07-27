#include <Email.h>

void WriteTheFile(char*fname, std::fstream &f)
{
string emailid;

     f.open(fname, ios::out);
     if(!f)
     {   
        cout<<"\n Unable to open the input file:"<<endl;
        exit(EXIT_FAILURE);
     }   
     for(int i=0;i<3;i++)
     {
     getline(cin,emailid);
     f<<emailid<<endl;
     } 
     f.close();
	 }
void ReadTheFile(char*fname, std::fstream &f)
{
     f.open(fname, ios::out);
     if(!f)
     {
        cout<<"\n Unable to open the input file:"<<endl;
        exit(EXIT_FAILURE);
     }
     for(int i=0;i<3;i++)
     {
     string id="";
     while(getline(f,id)){
        cout<<id<<endl;
     id="";
     }
     f.close();
     }
}

void Dispfile()
  {
       email="*******.@gmail.com";
	   email="*******.@gmail.edu";
			  
	cout<<"opening the file :\n"<<endl;
	cout<<" Valid Emailid's are  :"<<email<<"\n"<<endl;

	if(email=="*******.@gmail.com")
	{
	   cout<<"valid EmailIDs"<<"\n"<<endl;
	}

	else if(email=="*******.@gmail.edu")
	{
	   cout<<"valid EmailIDs"<<"\n"<<endl;
	}
	else 
	{
	   cout<<"Invalid emailIDs"<<"\n";
	}
}
