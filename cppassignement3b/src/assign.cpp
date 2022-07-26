#include"assign.h"

int main()
{


  Employee emp;

     cout<<"-----------------------------------------------------------------"<<endl;

	 cout<<"----------------welcome to employee details-----------------------"<<endl;

	 emp.getreportees();

	 emp.getDetails();

					                         
     displayDetails(emp);                         //friend function
												    
	return 0;


}

