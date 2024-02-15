/*Q.1 Write a Program to get and display N numbers of Hotels and static information using 
Encapsulation with an array of objects member by including the below-mentioned attributes:*/

#include<iostream>
using namespace std;
class Hoteldetails{
	
	private :
		int hotel_id;
		string hotel_name;
		string hotel_type;
		int hotel_rating;
		
		
		
		
		static string hotel_location;
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
	public :
		void setdata()
		{
			cout<<"\n---------------------------\n";
			cout<<"Enter hotel_Id :";
			cin>>hotel_id;
			cout<<"Enter Hotel_name:";
			cin>>hotel_name;
			cout<<"Enter Hotel_type:";
			cin>>hotel_type;
			cout<<"Enter Hotel_rating:";
			cin>>hotel_rating;
			cout<<"Enter Hotel_establish_year:";
			cin>>hotel_establish_year;
			cout<<"Enter Hotel_staff_quantity:";
			cin>>hotel_staff_quantity;
			cout<<"Enter Hotel_room_quantity:";
			cin>>hotel_room_quantity;
			cout<<"\n---------------------------\n\n";
			
		}

		void getdata()
		{
			cout<<"\n---------------------------\n";
			cout<<"Hotel_id : "<<hotel_id<<endl;
			cout<<"Hotel_name:"<<hotel_name<<endl;
			cout<<"Hotel_type:"<<hotel_type<<endl;
			cout<<"Hotel_rating:"<<hotel_rating<<" Star"<<endl;
			cout<<"Hotel_location: "<<hotel_location<<endl;
			cout<<"Hotel_establish_year : "<<hotel_establish_year<<endl;
			cout<<"Hotel_staff_quantity : "<<hotel_staff_quantity<<endl;
			cout<<"Hotel_room_quantity : "<<hotel_room_quantity<<endl;
			cout<<"\n---------------------------\n\n";
		}
		
	
};
string Hoteldetails::hotel_location="Surat";
int main()
{
	int n;
	cout<<"Enter numbers of Hotels : ";
	cin>>n;
	Hoteldetails h1[n];
	for(int i=0;i<n;i++)
	{
	h1[i].setdata();
	}
	for(int i=0;i<n;i++)
	{
	h1[i].getdata();
	}
}