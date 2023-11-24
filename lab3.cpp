#include<bits/stdc++.h>
using namespace std;

class Rectengle{
protected:
    int langht;
    int breadth;
    int area;
    public:
    Rectengle(int a, int b)
    {
        langht=a;
        breadth=b;
    }
    void printRec()
    {
        cout<<langht*breadth<<endl;
    }
};
class Square:public Rectengle
{
    public:
    Square(int a, int b): Rectengle(a, b){}
    //void print(){cout<< langht*breadth<<endl;}   
    void print(){printRec();}   
};
int main()
{
    Square ob1(3,3);
    ob1.print();
    Rectengle ob2(4, 5);
    ob2.printRec();

    return 0;
}