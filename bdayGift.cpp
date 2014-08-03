#include <iostream>

using namespace std;

int main()
{
    int testNum;
    long long x,sum=0;
    cin>>testNum;
    while(testNum--)
    {
        cin>>x;
        sum = sum + x;
    }

    if(sum%2==0)
    {
        cout<<sum/2<<".0"<<endl;
    }
    else
    {
        cout<<sum/2<<".5"<<endl;
    }

    return 0;
}