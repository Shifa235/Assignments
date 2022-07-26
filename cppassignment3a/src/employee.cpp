#include <header.h>


void Employee :: Update()
{
	cout<<"\nEnter Updated salary:";
	cin>>salary;
	cout<<"Enter updated supervisor ID:";
    cin>>super_id;
}
void Employee ::  Display()
{
	cout<<"\nName:"<<emp_name<<endl;
	cout<<"Emp ID:"<<emp_id<<endl;
    cout<<"DOB:"<<date<<"/"<<month<<"/"<<year<<endl;
    cout<<"Salary:"<<salary<<endl;
	cout<<"Supervisor ID:"<<super_id<<endl;
}
void Employee :: GetSupervisorReportees(Employee E2, Employee E4, Employee E5, Employee E6)
{
	cout<<"\nEmployee Details of Supervisor with ID:S01";  
	if(E2.super_id == "S01")
	{
	E2.Display();
	}
	if(E4.super_id == "S01")
	{
	E4.Display();
	}
	if(E5.super_id == "S01") 
	{
	E5.Display();
	}
	if(E6.super_id == "S01")
	{
	E6.Display();
	}
	
	cout<<"\nEmployee Details of Supervisor with ID:S02"<<endl;
	if(E2.super_id == "S02")
	{
	E2.Display();
	}
	if(E4.super_id == "S02")
	{
	E4.Display();
	}
	if(E5.super_id == "S02")
	{
	E5.Display();
	}
	if(E6.super_id == "S02")
	{
	E6.Display();
	}
}
void Employee :: Operator()
{
	string id;

	cout<<"Enter the ID:";
	cin>>id;
	         try
	         {
	                 if(id == "S02" || id == "S01")
	                          cout<<"Valid Supervisor ID";
	                 else
	                 {
	                          throw(id);
	                 } 
             }
	catch(...)
	{
             cout<<"Invalid Supervisor ID"<<endl;
    } 
}

