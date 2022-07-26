#include <header.h>

int main()
{

	Employee Emp, E1();
	cout<<"\nEmployee Details:"<<endl;
	Employee E2("E01", "AAA", "S01", 7 ,3, 1993, 20000);
	cout<<endl;
	Employee E4("E02", "BBB", "S02", 1, 12, 1994, 25000);
	cout<<endl;
	Employee E5("E03", "CCC", "S01", 4, 2, 1992, 30000);
	cout<<endl;
    Employee E6("E04", "DDD", "S02", 9, 11, 1995, 27000);

	Emp.GetSupervisorReportees(E2, E4, E5, E6);
	cout<<endl;
	Emp.Operator();

	cout<<endl;
		
	E2.Update();
    cout<<"\nUpdated Details:";
	E2.Display();

	Employee E3 = E2;
	cout<<"\nCopy Constructor";
	E3.Display();


	return 0;
}
