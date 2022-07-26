#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee
{
	public:
	        Employee(){}
		    Employee(string eid, string ename, string supid, int d, int m, int y, int sal)
			{
					emp_id = eid;
					emp_name = ename;
				    super_id = supid;
					date = d;
					month = m;
					year = y;
					salary = sal;

					cout<<"Name:"<<emp_name<<endl;
					cout<<"Employee ID:"<<emp_id<<endl;
					cout<<"DOB:"<<date<<"/"<<month<<"/"<<year<<endl;
					cout<<"Salary:"<<sal<<endl;
					cout<<"Supervisor ID:"<<super_id<<endl;
			}
			Employee(Employee &Emp)
			{
					emp_name = Emp.emp_name;
					emp_id = Emp.emp_id;
					date = Emp.date;
					month = Emp.month;
				    year = Emp.year;
					salary = Emp.salary;
			        super_id = Emp.super_id;
			}
			void Update();
			void Display();
		    void GetSupervisorReportees(Employee, Employee, Employee, Employee);
			void Operator();

	private:
			string emp_id, emp_name, super_id;
			int date, month, year, salary;
};																									
