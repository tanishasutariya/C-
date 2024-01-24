/*Q.1 Write a Program to find the sum of all three number’s cubes by implementing 
single-level inheritance: Class X->Class Y*/
#include<iostream>
using namespace std;
class X{
	protected :
		int a,b,c;
		
	public:
		void setData(int a,int b,int c){
			this->a=a;
			this->b=b;
			this->c=c;
		}
};

class Y : public X{
	 public :
	int getData(){
		return a * a * a + b * b * b + c * c * c;
	}
};

int main()
{
	Y n;
	int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    n.setData(num1, num2, num3);

    int sumOfCubes = n.getData();
    cout << "Sum of the cubes of the three numbers: " << sumOfCubes << endl;
}

/*Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that 
Fahrenheit temperature into Kelvin by implementing multilevel inheritance:Class P -> Class Q -> Class R*/
#include<iostream>
using namespace std;
	class C{
		protected :
		double cel,fer,kel;
	};
	
	class F : public C{
		public :
			double Fehrenheit(double cel)
			{
				this->cel = cel;
				return fer = (cel * 9/5) + 32;
			}
	};
	
	class K : public F{
			public :
				double Kelvin(double fer)
				{
					this->fer = fer;
					return kel = (fer - 32) * 5/9 + 273.15;
				}
	};
	
	int main()
	{
		double cel,fer,kel;
		K k1;
		cout << "Enter temperature in Celsius: ";
		cin >> cel;
		fer = k1.Fehrenheit(cel);
		kel = k1.Kelvin(fer);
		cout << "---------------------------------------" << endl;
		cout << " Celsius\tFehrenheit\tKelvin" << endl;
		cout << "---------------------------------------" << endl;
		cout << cel << "\t\t" << fer << "\t\t" << kel;
		cout << endl << "--------------------------------------"<<endl;
	}
