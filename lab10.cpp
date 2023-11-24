#include<bits/stdc++.h>
using namespace std;

class PrintNumber{
    public:
    void print(int nam)
    {
        cout<<nam<<endl;
    }
    void print(float nam)
    {
        cout<<nam<<endl;
    }
    void print(double nam)
    {
        cout<<nam<<endl;
    }
    void print(string nam)
    {
        cout<<nam<<endl;
    }
};
int main()
{
    PrintNumber n1, n2, n3, n4;
    n1.print(2);
    n2.print(2.4);
    n3.print(34.33333);
    n4.print("Sheikh Bhai");
  
    return 0;
}