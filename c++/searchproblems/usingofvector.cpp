#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v():
    v.push_back(1);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
}