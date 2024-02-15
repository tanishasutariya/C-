/*Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.
*/

#include <iostream>
using namespace std;

class Admin {
protected:
    std::string company_name;
    double manager_salary;
    double employee_salary;
    int total_staff;
    double total_annual_revenue;
    bool can_terminate;

public:
   
    void myAccess()  {
        cout << "Company Name: " << company_name <<endl;
        cout << "Manager's Salary: " << manager_salary <<endl;
        cout << "Employee's Salary: " << employee_salary <<endl;
        cout << "Total Staff: " << total_staff <<endl;
        cout << "Total Annual Revenue: " << total_annual_revenue <<endl;
        cout << "Can Terminate: " << std::boolalpha << can_terminate <<endl;
    }
};

	class Manager : public Admin {
	
	public:
		
    	void setManager(){
    			cout<<"\n----------------------------------\n";
				cout<<"Enter Company_Name : ";
				cin>>company_name;
				cout<<"Enter manager_salary : ";
				cin>>manager_salary;
				cout<<"Enter employee_salary : ";
				cin>>employee_salary;
				cout<<"Enter total_staff : ";
				cin>>total_staff;
				cout<<"Enter total_annual_revenue : ";
				cin>>total_annual_revenue;
				cout<<"Enter can_terminate : ";
				cin>>can_terminate;
				cout<<"\n----------------------------------\n";
	}

    void myAccess(){
      cout << "--- Manager Access ---" <<endl;
        Admin::myAccess(); 
    }
};

class Employee : public Manager {

	public:
		
  	 void setEmployee(){
    			cout<<"\n----------------------------------\n";
				cout<<"Enter Company_Name : ";
				cin>>company_name;
				cout<<"Enter manager_salary : ";
				cin>>manager_salary;
				cout<<"Enter employee_salary : ";
				cin>>employee_salary;
				cout<<"Enter total_staff : ";
				cin>>total_staff;
				cout<<"Enter total_annual_revenue : ";
				cin>>total_annual_revenue;
				cout<<"Enter can_terminate : ";
				cin>>can_terminate;
				cout<<"\n----------------------------------\n";
	}
	
    void myAccess() {
       cout << "--- Employee Access ---" <<endl;
        Admin::myAccess();
    }
};

int main() {
    Manager m1;
    m1.setManager();
    
    Employee e1;
	 e1.setEmployee();

    m1.myAccess();
    cout <<endl;
    e1.myAccess();
}
