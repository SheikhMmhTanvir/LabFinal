#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    void print(){cout<<"This is parent class."<<endl;}
};
class child:public parent{
    public:
    void print(){cout<<"This is child class."<<endl;}
};
int main()
{
    child ob;
    ob.print();
    parent ob1;
    ob1.print();
    return 0;
}