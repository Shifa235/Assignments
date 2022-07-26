#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

class Employee
{                                                             //first req
      private:
	          float salary;
			  int sid;
	  public:
	          string name;
			  int id;
			  string dob;

			  Employee(){}
			  Employee(string n, int a, string d, float m)    //second req
			  {
			     name =n;
				 dob=d;
				 id=a;
				 salary=m;
			  }

			  void operator= (Employee &E)
			  {
			     name =E.name;
				 dob=E.dob;
				 id=E.id;
				 salary=E.salary;
			  }

			  void getUpdate(float m, int b)                 //third req
			  {
			     salary=m;
				 sid=b;
				 cout<<"enter sid";
				 cin>>b;
				 cin>>m;
			  }

			  void getDetails()
			  {
			     cout<<"Enter Id:";
				 cin>>id;
				 cout<<"Enter Name:";
				 cin>>name;
				 cout<<"Enter DOB:";
				 cin>>dob;
				 cout<<"Enter salary:";
				 cin>>salary;
				 cout<<"--------------------------"<<endl;
			  }

			  void getreportees()                             //fourth req
			  {
			     cout<<"enter SUPERVISIOR ID"<<endl;
				 cin>>sid;
			  }

			  friend void displayDetails(Employee ob);        //friend function
};
 
void displayDetails(Employee ob)                               //fifth req
{
             cout<<"\nEmployee Details"<<endl;

			 cout<<"\nName: "<<"<"<<ob.name<<">"<<endl;

			 cout<<"\nEmployee ID: "<<"<"<<ob.id<<">"<<endl;

			 cout<<"\nDOB: "<<"<"<<ob.dob<<">"<<endl;

			 cout<<"\nsalary:"<<"<"<<ob.salary<<">"<<endl; 
}

