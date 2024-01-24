/*Q.1 Write a Program to create Student Record System for 5 students using Encapsulation.
Consider the below-mentioned attributes in the Student class:*/
#include<iostream>
using namespace std;
class Student{
	private :
	int stu_id;
	string stu_name;
	int stu_age;
	string stu_course;
	string stu_city;
	string stu_email;
	string stu_college;
	
	public :
	
	void setdata(int stu_id,string stu_name,int stu_age,string stu_course,string stu_city,string stu_email,string stu_college)
	{
		this->stu_id=stu_id;
		this->stu_name=stu_name;
		this->stu_age=stu_age;
		this->stu_course=stu_course;
		this->stu_city=stu_city;
		this->stu_email=stu_email;
		this->stu_college=stu_college;
	}
	void getdata()
	{
		cout<<"\n----------------------\n";
		cout<<"Stu_id : "<<stu_id<<endl;
		cout<<"Stu_name : "<<stu_name<<endl;
		cout<<"Stu_age : "<<stu_age<<endl;
		cout<<"Stu_course : "<<stu_course<<endl;
		cout<<"Stu_city : "<<stu_city<<endl;
		cout<<"Stu_email : "<<stu_email<<endl;
		cout<<"Stu_college : "<<stu_college<<endl;
		cout<<"\n----------------------\n";
	}
	
};
int main()
{
	Student s1,s2,s3,s4,s5;
	s1.setdata(1,"ishita",20,"fullstack","surat","ishu@gmail.com","GPGs");
	s2.setdata(2,"vraj",21,"commerce","surat","vraj@gmail.com","kp");
	s3.setdata(3,"roohi",15,"fullstack","surat","roohi@gmail.com","GPGs");
	s4.setdata(4,"surbhi",19,"MBA","navsari","surbhi@gmail.com","Agrval");
	s5.setdata(5,"devyani",24,"fullstack","surat","devyani@gmail.com","SPB");
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	

}

/*Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. 
Consider the below-mentioned attributes in the Customer structure:*/
#include<iostream>
using namespace std;
class Customer{
	private :
	int cust_id;
	string cust_name;
	int cust_age;
	string cust_city;
	string cust_mobile_number;
	int cust_simcard_validity;
	string cust_telecom_brand_name;
	
	public :
		void setdata(int cust_id,string cust_name,int cust_age,string cust_city,string cust_mobile_number,int cust_simcard_validity,string cust_telecom_brand_name)
		{
			this->cust_id=cust_id;
			this->cust_name=cust_name;
			this->cust_age=cust_age;
			this->cust_city=cust_city;
			this->cust_mobile_number=cust_mobile_number;
			this->cust_simcard_validity=cust_simcard_validity;
			this->cust_telecom_brand_name=cust_telecom_brand_name;
	
		}
		void getdata()
		{
			cout<<"\n----------------------\n";
			cout<<"Cust_id:"<<cust_id<<endl;
			cout<<"Cust_name:"<<cust_name<<endl;
			cout<<"Cust_age:"<<cust_age<<endl;
			cout<<"Cust_city:"<<cust_city<<endl;
			cout<<"Cust_mobile_number:"<<cust_mobile_number<<endl;
			cout<<"Cust_simcard_validity:"<<cust_simcard_validity<<endl;
			cout<<"Cust_telecom_brand_name:"<<cust_telecom_brand_name;
			cout<<"\n----------------------\n";
		}
	
};
int main()
{
	Customer c1,c2,c3,c4,c5;
	
	c1.setdata(1,"ishita",20,"surat","9898217885",2,"airtel");
	c2.setdata(2,"vraj",21,"surat","9898245671",3,"jio");
	c3.setdata(3,"devyani",24,"surat","9990217885",5,"jio");
	c4.setdata(4,"surbhi",19,"surat","989567885",3,"airtel");
	c5.setdata(5,"diya",18,"anad","9898215555",1,"jio");
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
}