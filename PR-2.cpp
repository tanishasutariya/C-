//Q.1 Write a Program to make Railway Reservation System.
#include<iostream>
using namespace std;

 class Train{
  private :
  int trainNum;
  string trainName;
  string source;
  string Destination;
  string trainTime;

public :
void setdata(){
cout<<"----Enter train Details----\n";
cout<<"Enter Train Number : ";
cin>>trainNum;
cout<<"Enter Train Name : ";
cin>>trainName;
cout<<"Enter Train Source : ";
cin>>source;
cout<<"Enter Train Destination : ";
cin>>Destination;
cout<<"Enter Train Time : ";
cin>>trainTime;
}
void header()
{
cout<<"==========================================================================\n";
cout<<"TrainNum"<<"\t"<<"TrainName"<<"\t"<<"TrainSource"<<"\t"<<"TrainDesti"<<"\t"<<"TrainTime"<<endl;
cout<<"===========================================================================\n";
}
void getdata()
{
cout<<"--------------------------------------------------------------------------\n";
cout<<trainNum<<"\t"<<"\t"<<trainName<<"\t"<<"\t"<<source<<"\t"<<"\t"<<Destination<<"\t"<<"\t"<<trainTime<<endl;
cout<<"--------------------------------------------------------------------------\n";
}
int Sreachdata(int n)
{
if(trainNum == n)
{
cout<<"Train Number : "<<trainNum<<endl;
cout<<"Train Name : "<<trainName<<endl;
cout<<"Train Source : "<<source<<endl;
cout<<"Train Destination :"<<Destination<<endl;
cout<<"Train Time : "<<trainTime<<endl;
return 0;

}
else {
//cout<<"Data not Found!!!";
return 1;
}
}
 };
int main()
{
Train t1[3];
int n ,check;

 for(int i=0;i<3;i++)
 {
  t1[i].setdata();
 }
 
 t1[0].header();
 for(int i=0;i<3;i++)
 {
  t1[i].getdata();
 }
cout<<"Search Train number : ";
cin>>n;

for(int i=0;i<n;i++)
 {
  t1[i].Sreachdata(n);
 }
if(check==1){
cout<<"Data is not Found!!!"<<endl;
}
}


//Q.2 Write a Program to make Supermarket Billing System
#include<iostream>
using namespace std;
class bill{
	public :
	int  billNumber;
	string ItemName;
	int	Quantity;
	int	Price;
	float Discount;
	
	string email;
	int pwd;
	string c_email;
	int c_pwd;
	
	void setData()
	{
		cout<<"Enter Bill Number : ";
		cin>>billNumber;
		cout<<"Enter Item Name : ";
		cin>>ItemName;
		cout<<"Enter Item Quantity : ";
		cin>>Quantity;
		cout<<"Enter Item Discount : ";
		cin>>Discount;
	}
			void header()
		{
		cout<<"==================================================\n";
		cout<<"  BillNum"<<"    ItemName"<<"    Quantity"<<"    Discount"<<endl;
		cout<<"===================================================\n";
		}
	void getData()
	{
		cout<<"---------------------------------------------------\n";
		cout<<"\t"<<billNumber<<"\t"<<  ItemName<<"\t"<<"\t"<<  Quantity<<"\t"<<   Discount<<"%"<<endl;	
		cout<<"----------------------------------------------------\n";
	}
	
};
int main()
{
	bill b1;
	b1.email="tanisha@gmail.com";
	b1.pwd=12345;
	
	int n;
	cout<<"---Supermarket Billing Details ---\n";
	cout<<"Enter Numbers of Bills  : ";
	cin>>n;
	
	bill b2[n];
	for(int i=0;i<n;i++)
	{
		b2[i].setData();
	}
	b2[0].header();
	for(int i=0;i<n;i++)
	{
		b2[i].getData();
	}
	
	cout<<"Enter Email : ";
	cin>>b1.c_email;
	cout<<"Enter Password : ";
	cin>>b1.c_pwd;
	
	int n1;
	if(b1.pwd==b1.c_pwd && b1.email==b1.c_email)
	{
		cout<<"Enter Serching Item Number : ";
		cin>>n1;
			for(int i=0;i<n;i++)
			{
				if(n1==b2[i].billNumber)
				{
					b2[i].getData();
				}
			}
			}
				else
				{
					cout<<"Invalis login!!!";
				}
}
