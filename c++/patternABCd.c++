#include<iostream>
using namespace std;
int main()
{
    int row,col;
    char name='A';
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            char name='A'+col-1;
            cout<<name;
        }
        cout<<endl;
    }
    return 0;
}