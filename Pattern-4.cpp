/*
Print the foollowing pattern: 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/


/*The following pattern is generalized to work with any number of rows and columns, provided that the number of rows and columns are equal.*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int cnt=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}