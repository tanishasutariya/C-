//Q.1 Write a Program to find all even elements from a given 1D array.
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int arr[size];
	cout<<"Array's elements :\n";
	for(int i=0;i<=size;i++)
	{
		cout << "a[" << i << "] = ";
		cin>>arr[i];
	}
	cout << "Even elements of an Array: ";
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            cout << arr[i];
            cout<<",";
        }
    }

	return 0;
}

/*Q.2 Write a Program to find leap years between two given numbers and store them in an array.
 And then print that array.*/
#include<iostream>
using namespace std;
int main()
{
	int FirstNum,SecondNum;
	cout<<"Enter First number : ";
	cin>>FirstNum;
	cout<<"Enter Second number : ";
	cin>>SecondNum;
	int leapyear[100],count=0;
	cout<<"The array is : ";
	for(int i=FirstNum;i<=SecondNum;i++)
	{
		if( (0 == i % 4) && (0 != i % 100) || (0 == i % 400) )
		cout<<i<<",";
	}

	return 0;
}