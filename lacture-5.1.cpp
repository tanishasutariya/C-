/*Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 1 class.
- use only one method named calculate() in the child class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition
*/
#include<iostream>
using namespace std;
class Arithmetic{
      private :
              int a=4,b=2;
      public :
             void operaion(){
                    cout<<"A/B : "<<a/b<<endl;
             }
             void operaion(int a,int b,int c){
                  cout<<"A-B-C : "<<a-b-c<<endl;
             }
             void operaion(int a,int b,int c,int d){
                  cout<<"A*B*C*d : "<<a*b*c*d<<endl;
             }
             void operaion(int a,int b,int c,int d,int e){
                  cout<<"A+B+C+D : "<<a+b+c+d<<endl;
             }
             
};
int main(){
    Arithmetic a1;
    
    a1.operaion();
    a1.operaion(1,4,1);
    a1.operaion(1,2,4,5);
    a1.operaion(10,20,30,40,50);
}

/*Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- Override getTotalOvers() method in both classes
*/
#include<iostream>
using namespace std;
class Cricket{
      public :
      int getTotalOvers(){
             return 50;      
      }
};
class T20match : public Cricket{
    public :
      int getTotalOvers(){
          return 20;
      }
};
class Testmatch : public Cricket {
    public :
     int  getTotalOvers(){
          return 90;
     }
};
int main(){
    Cricket c;
    T20match t1;
    Testmatch t2;
    
    cout<<"Cricket match has : "<<c.getTotalOvers()<<"overs"<<endl;
    cout<<"T20 match has : "<<t1.getTotalOvers()<<"overs"<<endl;
    cout<<"Test match has : "<<t2.getTotalOvers()<<"overs"<<endl;
}
