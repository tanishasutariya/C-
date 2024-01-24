/*Q.1 Write a Program to create a class to read and add two distances.*/
#include <iostream>
using namespace std;

class Distance {
	private:
	    int feet;
	    int inches;
	
	public:
	    void setData() {
	        cout << "Enter feet: ";
	        cin >> feet;
	        cout << "Enter inches: ";
	        cin >> inches;
	    }
	
	    void addDistances(Distance d1, Distance d2) {
	        feet = d1.feet + d2.feet;
	        inches = d1.inches + d2.inches;
	
	        if (inches >= 12) {
	            feet += inches / 12;
	            inches %= 12;
	        }
	    }
	
	    void getData() {
	        cout << "Total distance: " << feet << " feet " << inches << " inches" <<endl;
	    }
	};

int main() {
    Distance distance1, distance2, result;

    cout << "Enter the first distance:" <<endl;
    distance1.setData();

    cout << "Enter the second distance:" <<endl;
    distance2.setData();

    result.addDistances(distance1, distance2);

    result.getData();
}

/*Q.2 Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format.*/
#include <iostream>
using namespace std;

class TimeConverter {
	private:
	    int hours;
	    int minutes;
	    int seconds;
	
	public:
	    void convertTime(int totalSeconds) {
	        hours = totalSeconds / 3600;
	        totalSeconds %= 3600;
	        minutes = totalSeconds / 60;
	        seconds = totalSeconds % 60;
	    }
	
	    void getData() {
	        cout << "Time in (HH:MM:SS) format: ";
	        if (hours < 10) {
	            cout << "0";
	        }
	        cout << hours << ":";
	        if (minutes < 10) {
	            cout << "0";
	        }
	        cout << minutes << ":";
	        if (seconds < 10) {
	            cout << "0";
	        }
	        cout << seconds << endl;
	    }
};

int main() {
    TimeConverter time;
	int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;

    time.convertTime(seconds);
    time.getData();
}
