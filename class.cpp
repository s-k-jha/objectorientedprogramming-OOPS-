#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    string email;
};
int main()
{
    
    int numeric;
    Student stud;
    stud.name="shivam";
    stud.rollno=7282;
    stud.email="shivamkumarjha0825@gmail.com";
    cout<<"Which information you want to know about myself\n";
    cout<<" 1.Name\n 2.Roll_No \n 3. Email\n";
    cout<<"PRESS\n 1 FOR NAME \n 2 FOR ROLL_NO \n 3 FOR EMAIL-ID\n";
    cin>>numeric;
    if(numeric==1)
    {
        cout<<stud.name;
    }
   
    else if(numeric==2)
    {
        cout<<stud.rollno;
    }
    else
    {
        cout<<stud.email;
    }
    return 0;}
