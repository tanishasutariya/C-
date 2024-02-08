/*Q.1 Write a Program to print the rate of interest of different banks
 using hierarchical inheritance:*/
#include<iostream>
using namespace std;
	class RBI{
		protected :
		double rate1,rate2,rate3;
	};
	class SBI : public RBI{
		public :
		void setdata(){
		 cout<<"Enter rate of SBI :";
		 cin>>rate1;
		}
		
		void getROI(){
			cout << "Rate of Interest (SBI): " <<rate1<< "%" <<endl;
		}
	};
	
	class BOB : public RBI{
		public :
		void setdata(){
		 cout<<"Enter rate of BOB :";
		 cin>>rate2;
		}
		void getROI(){
			cout << "Rate of Interest (BOB): " <<rate2<< "%" <<endl;
		}
	};
	class ICICI : public RBI{
		public:
		void setdata(){
		 cout<<"Enter rate of ICICI :";
		 cin>>rate3;
	}
		 void getROI(){
			cout << "Rate of Interest (ICICI): " <<rate3<< "%" <<endl;
		}
	};
int main()
{
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.setdata();
	b1.setdata();
	i1.setdata();
	
	s1.getROI();
	b1.getROI();
	i1.getROI();
}
/*Q.2 Write a Program to perform four different numbers’ sum by inheriting 
constructors in hybrid inheritance.*/
#include<iostream>
using namespace std;
class A{
	protected :
		int a;
		
		public :
			
		void setDataA(){
		cout<<"Enter Value of A : ";
		cin>>a;
	}
	void getDataA(){
			cout<<"A : "<<a<<endl;
		}
};

class B: public A{
		protected :
		int b;
	
	public :
		
		void setDataB(){
		cout<<"Enter Value of B : ";
		cin>>b;
	}
	void getDataB(){
			cout<<"B : "<<b<<endl;
		}
};
class C: public 	A{
		protected :
		int c;
	
		public :
		void setDataC(){
		cout<<"Enter Value of D : ";
		cin>>c;
	}
	
	void getDataC(){
			cout<<"C : "<<c<<endl;
		}
};

class D : public C, public B{
		protected :
		int d;
	
		public :
		void setDataD(){
		cout<<"Enter Value of D : ";
		cin>>d;
		}
		void getDataD(){
			cout<<"D : "<<d<<endl;
			cout<<"-----------------------\n";
			cout<<B::a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<B::a+b+c+d<<endl;
			cout<<"-----------------------\n";
		}
		
};

int main()
{
	D d1;
	d1.B::setDataA();
	d1.setDataB();
	d1.setDataC();
	d1.setDataD();
	
	d1.B::getDataA();
	d1.getDataB();
	d1.getDataC();
	d1.getDataD();
}