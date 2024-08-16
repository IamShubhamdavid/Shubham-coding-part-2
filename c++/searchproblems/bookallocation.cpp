#include<iostream>
using namespace std;
int main()
{
    int start=90,end=203,mid,ans,count,n,m;
    int arr[i];
     while(start<=end)
        {
            mid=(start+end)/2;
            int page=0,count=1;
            for( int i=0;i<n;i++)
            {
                page+=arr[i];
                if(page>mid)
                {
                    count++;
                    page=arr[i];
                }
            }
        if(count<=m)
        {
            ans=mid;
            end=mid-1;
        }  
        else
        start=mid+1;
        }
        cout<<ans;
 }
