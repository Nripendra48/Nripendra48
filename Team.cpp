//231A - Team
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    cin>>i;
    int tsum=0;
    for(int n=0;n<i;n++)
    {   int sum=0,z;
        for(int x=0;x<3;x++)
        {
        cin>>z;
        sum+=z;

        }
        if(sum>=2)
        {tsum++;}
    }
    cout<<tsum;
}