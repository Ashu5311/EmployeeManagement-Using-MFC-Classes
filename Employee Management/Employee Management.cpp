// Employee Management.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
struct Employee
{
	int EId;
	char Name[50];
	int Salary;
	char Designation[50];
};


int main()
{
	Employee Emp;
	bool isInserted = false;
	while(true)
	{
	int choice;
	cout << "what you want to do: "<< endl;
	cout << "press 1 to Insert Employee : " <<endl;
	cout << "press 2 to Modify Employee Details:" << endl;
	cout << "press 3 to Delete Employee Details:" << endl;
	cout << "press 4 to show Employee Details: " << endl;
	cout << "To Exit:" << endl;
	
	
	cin >> choice;
	switch(choice)
	{
	case 1:
		cout << "Inserting Employee Information:"<< endl;
		cout  << "Enter Employee ID:";
		cin >> Emp.EId ;
		cin.ignore();
		cout << "Enter Employee Name:" ;
		cin.getline(Emp.Name,50);
		cout << "Enter Emlpoyee Salary:" ;
		cin >> Emp.Salary ;
		cin.ignore();
		cout << "Enter Employee Designation:" ;
		cin.getline(Emp.Designation,50);
		isInserted = true;
		break;

	case 2:
		if(isInserted)
		{
		cout << "Enter Employee Name:" ;
		cin.ignore();
		cin.getline(Emp.Name,50);
		cout << "Enter Emlpoyee Salary:" ;
		cin >> Emp.Salary ;
		cin.ignore();
		cout << "Enter Employee Designation:" ;
		cin.getline(Emp.Designation,50);
		break;
		}
	case 3:
		Emp = Employee(); 
		break;
	case 4:
		if(isInserted)
		{
		cout << "Show Employee Information:" ;
		cout << Emp.EId <<endl;
		cout << Emp.Name << endl;
		cout << Emp.Salary << endl;
		cout << Emp.Designation << endl;
		}
		else
		{
			cout << " No Information To Show "<<endl ;
		}
		break;
	case 5:
		return 0;

	default:
		cout << "Choose a Correct Option " << endl;
		break;
	}
}
 return 0;
};


