#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int >vnew;
vnew.push_back(4);
vnew.push_back(14);
vnew.push_back(41);
vnew.push_back(42);
vnew.push_back(84);
vnew.push_back(23);
vnew.pop_back();
cout<<"size of vnew:"<<vnew.size()<<endl;
cout<<"capacity of vnew:"<<vnew.capacity()<<endl;
}