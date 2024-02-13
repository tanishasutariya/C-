/*Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.*/
#include<iostream>
using namespace std;
class L5_2{
	private :
		int num;
	public :
		void setData(string obj){
			cout<<obj<<" Enter number : ";
			cin>>num;
		}

	bool operator>(L5_2 n2)
	{
		if(num>n2.num){
			return true ;
		}
		else{
			return false;
		}
	}	
	
	bool operator<(L5_2 n2)
	{
		if(num<n2.num){
			return true ;
		}
		else{
			return false;
		}
	}	
	
	bool operator==(L5_2 n2)
	{
		if(num==n2.num){
			return true ;
		}
		else{
			return false;
		}
	}	
};
int main(){
	
	L5_2 n1,n2;
	n1.setData("N1");
	n2.setData("N2");
	if(n1>n2){
		cout<<"N1 is higher value!!!!";
	}
	else{
		cout<<"N2 is higher value!!!!";
	}
	cout<<"\n=======================\n";

	n1.setData("N1");
	n2.setData("N2");
	if(n1<n2){
		cout<<"N1 is lower value!!!!";
	}
	else{
		cout<<"N2 is lower value!!!!";
	}
	
	cout<<"\n=======================\n";
	
	n1.setData("N1");
	n2.setData("N2");
	if(n1==n2){
		cout<<"N1 and N2 is equal values!!!!";
	}
	else{
		cout<<"N1 and N2 is not equal values!!!!";
	}
	
	cout<<"\n=======================\n";

}
