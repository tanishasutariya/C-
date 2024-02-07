/*Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
In the main, define two objects a triangle and a rectangle, and then call the area() function using
these two objects.*/
#include <iostream>
using namespace std;


class Shape
{
private:
	double width, height;
public:
	//  constructor
	Shape(double newWidth, double newHeight){
		this->width=newWidth;
		this->height=newHeight;
	}
	double getWidth() 
	{
		return width;
	}
	double getHeight() 
	{
		return height;
	}
};


class Rectangle: public Shape
{
public:
   
    Rectangle(double width, double height):Shape(width,height)
    {


    }
    double area()
    {
        return (getWidth()*getHeight());
    }
};


class Triangle: public Shape
{
public:
    Triangle(double base, double height): Shape(base,height)
    {


    }
    double area()
    {
        return (getWidth()*getHeight())/2.0;
    }
};


int main ()
{
	Rectangle rectangle(5.0,3.0);
	Triangle triangle(2.0,5.0);
	cout <<"Area of rectangle is: "<< rectangle.area() << endl;
	cout <<"Area of triangle is: "<< triangle.area() << endl;
}

/*Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.*/
#include<iostream>
using namespace std;
class NUM{
	protected :
		int num;
		public :
			void setData(int num){
			 	this->num=num;
			}
};
class Square : public NUM{
	public:
		int getDataS(){
				return num*num;
		}
};
class Cube : public NUM{
	public :
		int getDataC(){
			return num*num*num;
		}
};
int main(){
	Square s;
	Cube c;
	int n;
	cout<<"Enter any Number :";
	cin>>n;
	
	s.setData(n);
	c.setData(n);
	cout<<"square : "<<s.getDataS()<<endl;
	cout<<"Cube : "<<c.getDataC()<<endl;
}

/*Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.*/
#include<iostream>
using namespace std;
class A{
	protected:
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string comp_name;
		string address;
		string email;
		string contact;
		
		public :
			void setDataA(){
				cout<<"Enter ID : ";
				cin>>id;
				cout<<"Enter Name : ";
				cin>>name;
				cout<<"Enter Role : ";
				cin>>role;
			}
};

class B : public A{
	public :
		void setDataB(){
				cout<<"Enter Salary : ";
				cin>>salary;
				cout<<"Enter  experience: ";
				cin>>experience;
			}
};

class C : public B{
	public :
		void setDataC(){
				cout<<"Enter Comp_Name : ";
				cin>>comp_name;
				cout<<"Enter  Address : ";
				cin>>address;
			}
		void getDataC(){
			cout<<"---------------------\n";
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"---------------------\n";
		}
};

class D: public C{
	public :
		void setDataD(){
				cout<<"Enter Email : ";
				cin>>email;
				cout<<"Enter  Contact : ";
				cin>>contact;
			}
		void getDataD(){
			cout<<"ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"Experience : "<<experience<<"year"<<endl;
			cout<<"Comp_name : "<<comp_name<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"Contact : "<<contact<<endl;
		}
};

int main(){
	D d1;
	d1.setDataA();
	d1.setDataB();
	d1.setDataC();
	d1.setDataD();
	
	d1.getDataC();
	d1.getDataD();
	
	
}
