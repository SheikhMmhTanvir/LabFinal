#include<bits/stdc++.h>
using namespace std;

class Member{
    protected:
    string name;
    int age;
    int Phone_number;
    string Address;
    int salary;
    public:
    void printSalary()
    {
        cout<<salary<<endl;
    }
};
class Employee: virtual public Member
{
    private:
    string specialization, department;
    public:
    Employee(string nam, int Age, int pn, string ad, int sal,  string sp, string dp)
    {
        name=nam;
        age=Age;
        Phone_number=pn;
        Address=ad;
        salary=sal;
        specialization=sp;
        department=dp;
    } 
    void prinT()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<Address<<endl;
        cout<<specialization<<endl;
        cout<<department<<endl;

        printSalary();
    }
};
class Manager: virtual public Member, Employee
{
    private:
    string specialization, department;

    public:
    Manager(string nam, int Age, int pn, string ad, int sal, string sp, string dp) 
    : Employee(nam, Age, pn, ad, sal, sp, dp){}

    void print()
    {
        prinT();
    }
};

int main()
{
    Manager manager1("Sheikh Tanvir", 21, 987896, "chawakbazar", 30000, "Developer", "CSE");
    manager1.print();
    cout<<endl;
    Employee manager2("Sheikh Tanvir", 21, 987896, "chawakbazar", 30000, "Developer", "CSE");
    manager2.prinT();
    return 0;
}