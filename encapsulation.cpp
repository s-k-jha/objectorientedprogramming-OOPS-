#include<iostream>
using namespace std;
class A{                  //class A
 int a,b;
 public:
  void show()               //function show which show two values 
  {
     cout<<"enter values1\n";
     cin>>a;
     cout<<"enter values2\n";
     cin>>b;
     cout<<a<<" \n "<<b<<endl;
     }
     
  void sum()                   //sum function which add two numbers
  {
      cout<< "enter two numbers";
      cin>>a>>b;
      cout<<"sum ="<<a+b;
      
  }
     };
int main()
{
A ob;                             //  A is class and ob is object

ob.show();                         //calling show function 
                                       
ob.sum();                           //calling sum function

return 0;
}
