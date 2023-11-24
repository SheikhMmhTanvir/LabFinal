#include<bits/stdc++.h>
using namespace std;

class Programming{
    string name;
    public:
    Programming(string String="I Love Programming language"){name=String;}
    void setString(string String){name=String;}
    void display()
    {
        cout<<"I love "<<name<<endl;
    }
};
int main()
{
    Programming ob1, ob2("Sheikh Bhai");
    ob1.display();
    ob2.display();
    

    return 0;
}