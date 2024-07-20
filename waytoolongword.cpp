//71A - Way Too Long Words
#include<iostream>
#include<string>
using namespace std;

int main()
{

    int n=0;
    cin>>n;
    string a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {   
        if(a[i].size()<=10)
       { cout<<a[i]<<endl;}
       else
       {
        cout<<a[i][0]<<a[i].size()-2<<a[i][a[i].size()-1]<<endl;
       }
    }

}