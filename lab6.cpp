#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    public:
    Student(string stName="Unknown"){name=stName;}
    void setName(string stName){name=stName;};
    void print()
    {
        cout<<name<<endl;
    }

};
int main()
{
    Student ob1("Sheikh Bhai"), ob2;
    ob1.print();
    ob2.print();
    
    return 0;
}