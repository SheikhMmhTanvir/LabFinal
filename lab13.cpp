#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string address;
    public:
    Student(string Name ="Unknown", int Age=0, string Address="not available")
    {
        name=Name;
        age=Age;
        address=Address;
    }
    void setInfo(string Name, int Age)
    {
        name=Name;
        age=Age;
    }
    void setInfo(string Name, int Age, string Address)
    {
        name=Name;
        age=Age;
        address=Address;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Address :"<<address<<endl;
    }
};
int main()
{
    Student ob1, ob2("Sheikh Tavnir", 20), ob3("Sheikh Rezvi", 15, "Badarkhali");
    ob1.display();
    cout<<endl;
    ob2.display();
    cout<<endl;
    ob3.display();
  
    return 0;
}