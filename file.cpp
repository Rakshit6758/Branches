#include <iostream>
using namespace std;

class stud // class declaration
{
    public: // class 
    char name[30],clas[10];  // char
    int rol,age;  // int

    void enter() 
    {
        cout<<"Enter Student Name: "; cin>>name; // student name       
        cout<<"Enter Student Age: "; cin>>age;     // studnet age
        cout<<"Enter Student Roll number: "; cin>>rol;        
        cout<<"Enter Student Class: "; cin>>clas;
    }
    
    void display() 
    {
        cout<<"\n Age\tName\tR.No.\tClass";   // cout name
        cout<<"\n"<<age<<"\t"<<name<<"\t"<<rol<<"\t"<<clas; 
    }
};

int main()   // main
{
    class stud s;
    s.enter();
    s.display();
    cin.get();//use this to wait for a keypress 
} 
