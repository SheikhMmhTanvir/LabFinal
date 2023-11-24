#include<bits/stdc++.h>
using namespace std;

class Bank{
    private:
    int amount=50;
    public:
    Bank(){};
    Bank(int i){amount+=i;}
    void display(){cout<<"Final Amount : "<<amount<<"$"<<endl;}
};
int main()
{
    Bank account1, account2(100);
    account1.display();
    account2.display();
    
    
    return 0;
}