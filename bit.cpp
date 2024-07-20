//A. Bit++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0,sum=0;
    string z;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>z;
        if(z[1]=='+')
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }
    cout<<sum;
}