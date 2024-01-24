/*Q.1 Write a Program to create an Employee Record System using the Class & Object of any 5 employees. 
Consider the below-mentioned attributes in the Employee class:*/
#include<iostream>
using namespace std;

class Employee{
	private :
	int emp_id;
	string emp_name;
	int emp_age;
	string emp_role;
	int emp_salary;
	string emp_city;
	int emp_experience;
	string emp_company_name;
	
	public:
	void setData()
	{
		cout<<"\n---------------\n";
		cout<<"Enter emp_id: ";
		cin>>emp_id;
		cout<<"Enter emp_name: ";
		cin>>emp_name;
		cout<<"Enter emp_age: ";
		cin>>emp_age;
		cout<<"Enter emp_role: ";
		cin>>emp_role;
		cout<<"Enter emp_salary: ";
		cin>>emp_salary;
		cout<<"Enter emp_city: ";
		cin>>emp_city;
		cout<<"Enter emp_experience: ";
		cin>>emp_experience;
		cout<<"Enter emp_company_name: ";
		cin>>emp_company_name;
		cout<<"\n---------------\n";		
	}
	void getData()
	{
		cout<<"\n---------------\n";
		cout<<"emp_id: "<<emp_id<<endl;
		cout<<"emp_name: "<<emp_name<<endl;
		cout<<"emp_age: "<<emp_age<<endl;
		cout<<"emp_role: "<<emp_role<<endl;
		cout<<"emp_salary: "<<emp_salary<<endl;
		cout<<"emp_experience: "<<emp_experience<<" years"<<endl;
		cout<<"emp_company_name: "<<emp_company_name<<endl;
		cout<<"\n---------------\n";
	}
};
int main()
{
	Employee emp1,emp2,emp3,emp4,emp5;
	 
	 emp1.setData();	 
	 emp2.setData();
	 emp3.setData();
	 emp4.setData();
	 emp5.setData();
		
	 emp1.getData();
	 emp2.getData();
	 emp3.getData();
	 emp4.getData();
	 emp5.getData();
}

/*Q.2 Write a Program to create a Car Record System using the Class & Object of any 4 Cars. 
Consider the below-mentioned attributes in the Car class:*/
#include<iostream>
using namespace std;

class Employee{
	private :
	int car_id;
	string car_company_name;
	string car_color;
	string car_model;
	int car_release_year;
	
	public:
		void input()
		{
			cout<<"\n---------------\n";
			cout<<"Enter car_id: ";
			cin>>car_id;
			cout<<"Enter car_company_name: ";
			cin>>car_company_name;
			cout<<"Enter car_color: ";
			cin>>car_color;
			cout<<"Enter car_model: ";
			cin>>car_model;
			cout<<"Enter car_release_year: ";
			cin>>car_release_year;
			cout<<"\n---------------\n";
		}
		void output()
		{
			cout<<"\n---------------\n";
			cout<<"car_id: "<<car_id<<endl;
			cout<<"car_company_name:: "<<car_company_name<<endl;
			cout<<"car_color: "<<car_color<<endl;
			cout<<"car_model: "<<car_model<<endl;
			cout<<"car_release_year in : "<<car_release_year<<endl;
		}
	};
	
	int main()
	{
		Employee car1,car2,car3,car4;
		
		car1.input();
		car2.input();
		car3.input();
		car4.input();
		
		car1.output();
		car2.output();
		car3.output();
		car4.output();	
	}