///*Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value. Create a private member of the typed string, and in the constructor simply 
//assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the variable 
//and one that takes a string argument, which it prints in addition to the internal message.
//*/
//
//#include<iostream>
//using namespace std;
//
//class Massage{
//	
//	private :
//		string msg1;
//	public :
//		
//		Massage(){
//			cout<<"Enter Massage1 : ";
//			cin>>msg1;
//		}
//		
//		void print(){
//			cout<<"Massage 1 : "<<msg1<<endl;
//		}
//		
//		void print(string msg2){
//			
//			cout<<"Massage 2 : "<<msg2<<endl;
//		}
//		
//		void add(string msg2){
//			
//			cout<<msg1<<" "<<msg2<<endl;
//		}
//};
//int main(){
//	
//	Massage m;
//	m.print();
//	
//	string msg2;
//	cout<<endl<<"Enter Massage2 : ";
//	cin>>msg2;
//	m.print(msg2);
//	
//	cout<<endl<<"Marge two Massages : ";
//	m.add(msg2);	
//}




/*Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
*/

#include <iostream>
using namespace std;

class Distance {
	
private:
    int km;
    int meter;

public:
    
    void setKm() {
        cout<<"Enter Km : ";
        cin>>km;
    }

    void setMeter() {
        cout<<"Enter meter : ";
        cin>>meter;
    }

    Distance operator+(Distance input2) {
        Distance result;
        int totalMeter = (km * 1000 + meter) + (input2.km * 1000 + input2.meter);
        result.km = totalMeter / 1000;
        result.meter = totalMeter % 1000;
        return result;
    }

  
    void getData() {
       cout << "Km: " << km << ", Meter: " << meter <<endl;
    }
};

int main() {
  
    Distance input1;
    input1.setKm();
    input1.setMeter();

    Distance input2;
    input2.setKm();
    input2.setMeter();

    cout<<"-------------------\n";
    cout << "Input 1: " <<endl;
    input1.getData();
    cout<<"-------------------\n";

    cout<<"-------------------\n";
    cout << "Input 2: " <<endl;
    input2.getData();
    cout<<"-------------------\n";

    Distance total = input1 + input2;

    cout<<"\n-------------------\n";
    cout << "Output: " <<endl;
    total.getData();
    cout<<"-------------------\n";
}                         