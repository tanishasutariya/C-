/*Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation 
and use of Parameterised Constructor by including below-mentioned attributes:*/
#include<iostream>
using namespace std;

	class DiamondCompany{

	public :
	
 	int comp_id;
 	string comp_name;
 	int comp_staff_quantity;
 	double comp_revenue;
 	int comp_import_raw_diamonds;
 	int comp_export_diamonds;
 	string comp_ceo;
	
 	DiamondCompany(int comp_id,string comp_name,int comp_staff_quantity,double comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_ceo)
 	{
 		this->comp_id=comp_id;
 		this->comp_name=comp_name;
 		this->comp_staff_quantity=comp_staff_quantity;
		this->comp_revenue=comp_revenue;
 		this->comp_import_raw_diamonds=comp_import_raw_diamonds;
 		this->comp_export_diamonds=comp_export_diamonds;
 		this->comp_ceo=comp_ceo;
 	}
	void getdata()
	{
		cout<<"\n--------------------------------\n";
		cout << "   Comp_ID: " << comp_id << endl;
		cout << "   Comp_name: " << comp_name << endl;
		cout << "   Comp_staff_quantity: " << comp_staff_quantity << endl;
		cout << "   Comp_revenue : " << comp_revenue << "Rs per year" << endl;
		cout << "   Comp_raw_diamonds_import: " << comp_import_raw_diamonds << endl;
		cout << "   Comp_diamonds_export: " << comp_export_diamonds << endl;
		cout << "   Comp_ceo_name: " << comp_ceo << endl;
		cout<<"\n--------------------------------\n";
	}
};
int main()
{
int n;
	int comp_id;
 	string comp_name;
 	int comp_staff_quantity;
 	double comp_revenue;
 	int comp_import_raw_diamonds;
 	int comp_export_diamonds;
 	string comp_ceo;
 	
	cout << "Enter Numbers of Diamond companies : ";
	cin >> n;

	for(int i=0;i<n;i++)
	{
		cout << "Enter Comp_ID: ";
		cin >> comp_id;
		cout << "Enter Comp_name: ";
		cin >> comp_name;
		cout << "Enter Comp_staff_quantity: ";
		cin >>comp_staff_quantity ;
		cout << "Enter Comp_revenue: ";
		cin >> comp_revenue;
		cout << "Enter Comp_raw_diamond_import: ";
		cin >> comp_import_raw_diamonds;
		cout << "Enter Comp_diamond_export: ";
		cin >> comp_export_diamonds;
		cout << "Ente Comp_CEO: ";
		cin >> comp_ceo;
			
		DiamondCompany c1(comp_id,comp_name,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_ceo);
		cout<<"\n===============================\n";
		cout << "   Company information : ";
		cout<<"\n===============================\n";
		c1.getdata();
}
}


/*Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation 
and the use of a Default constructor by including the below-mentioned attributes:*/
#include<iostream>
using namespace std;

class Cafe{
	
	private:	
	int cafe_id;
	string cafe_name;
	string cafe_type;
	string cafe_rating;
	string location;
	int cafe_esta_year;
	int staff_qnt;
	
	public:
		Cafe()
		{
			cout<<"===========================\n";
			cout<<"Fast Food Cafe Information";
			cout<<"\n===========================\n";
		}
		void setData(){
			cout<<"Enter Cafe Id : ";
			cin>>cafe_id;
			cout<<"Enter Cafe Name : ";
			cin>>cafe_name;
			cout<<"Enter Cafe type : ";
			cin>>cafe_type;
			cout<<"Enter Cafe rating : ";
			cin>>cafe_rating;
			cout<<"Enter Cafe Location : ";
			cin>>location;
			cout<<"Enter Cafe cafe_esta_year : ";
			cin>>cafe_esta_year;
			cout<<"Enter Cafe staff quntity : ";
			cin>>staff_qnt;
		}
		void getData(){
			 cout<<cafe_id<<"\t"<<cafe_name<<"\t"<<"\t"<<cafe_type<<"\t"<<"\t"<<cafe_rating<<"\t"<<"\t"<<location<<"\t"<<"\t"<<cafe_esta_year<<"\t"<<"\t"<<staff_qnt<<endl<<endl;
			 cout<<"-------------------------------------------------------------------------------------------------\n";
		}
		void header()
		{
			cout<<"-------------------------------------------------------------------------------------------------\n";
			cout<<"Cafe_Id"<<"\t"<<"  Cafe_Name"<<"\t"<<"Cafe_Type"<<"\t"<<"Cafe_Rating"<<"\t"<<"Cafe_Location"<<"\t"<<"cafeYear"<<"\t"<<"Staffqnt"<<endl;
			cout<<"-------------------------------------------------------------------------------------------------\n";
		}
};
int main()
{
	int n;
	cout<<"Enter Number of Cafe:\t";
	cin>>n;
	Cafe c1[n];
	for(int i=0;i<n;i++)
	{
		c1[i].setData();
	}
	c1[0].header();
	for(int i=0;i<n;i++)
	{
		c1[i].getData();
	}
}