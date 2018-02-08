/*
     Name:      Krishna rana
     Course:    CIS 160 ME1
     Date:      05/04/2016
     Program:   Payroll
     Description:  This program calculates the pay of an employee from the given input.
     			The input consists of name ,hours worked and hourly rate. The output of the program 
     			is the name, hour's worked and rate and the total gross pay.
*/
#include <iostream>//Standard Input/output streams libary
#include <iomanip>// Header providing parametric manipulators

using namespace std;
//class Defination
class Payroll
{	
	//Access specifiers
	private:
		//Data members
		string name;
  		float hours, payrate,grosspay;
  	//Access Specifiers	
  	public:
  		//Constrctor
  		Payroll(){  }
  		//Member function prototype
  		void getdata();
  		void wages();
  		void print();
  		//Destructors
  		~Payroll(){  }
};
//Main() Function Defination
//This function runs the whole program with step by step intruction written below.
//main() has calls and parameters of other function in the program.
int main()
{	
	//Local Definations/ Declarlations
	//Initialization of class Payroll value.
	//creating object for class Payroll.
	Payroll p;
	//Function Calls
	p.getdata();
	p.wages();
	p.print();
	return 0;
}
//getdata() Function Defination
//This function is used to get input from the user.
//The input consist of Name, hours worked, and hourly rate.
//It's return type is null, but it passes the value of Name, hours, and payrate to main()
//and from main() to class Payroll.
//It sends the value to main() and main() stores it in class Payroll for further use.
void Payroll::getdata()
{
	//Local Definations/ Declarlations
	//Input Section to get name, hours and payrate.
	//Get's the Employee name
	cout<<"Enter the employee name: ";
	getline(cin,name);
	//Get's the hours worked
	cout<<"Enter the Hours worked: ";
	cin>>hours;
	//Get's the hourly pay rate 
	cout<<"Enter the Hourly rate: ";
	cin>>payrate;
	
}
//grosspay() function defination
//It calculates the grosspay with hours and payrate.
//It has a return type of float.
//Returns grosspay to class Payroll.
void Payroll::wages()
{
	grosspay= (hours * payrate);
}
//Print() function Defination
//This function is the output section of the program
//It output's the Name, hours, payrate and grosspay for the employee.
//it's return type is null.
void Payroll::print()
{
	//output heading for the program
	//setprecision(2) prints answers in 2 decimal spaces.
	cout << fixed << showpoint << setprecision(2);
	cout<<endl<<endl;
	cout<<"****************************************"<<endl;
	cout<<"Employee Name: "<<setw(20)<<name<<endl<<endl;
	cout<<"Hours Worked: "<<setw(21)<<hours<<endl;
	cout<<"Hourly Rate: "<<setw(15)<<"$"<<setw(7)<<payrate<<endl<<endl;
	cout<<"Total Wages: "<<setw(15)<<"$"<<setw(7)<<grosspay<<endl;
	cout<<"****************************************"<<endl;
}
