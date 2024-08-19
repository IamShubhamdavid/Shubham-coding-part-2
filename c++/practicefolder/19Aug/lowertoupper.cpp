#include<iostream>
using namespace std;
void lowertoupper(string &str,int index)
{
    if(index==-1)
    return;
    str[index]='A'+str[index]-'a';
    lowertoupper(str,index-1);
}
int main()
{
    string str="akancha";
    lowertoupper(str,6);
    cout<<str<<endl;
    return 0;
}