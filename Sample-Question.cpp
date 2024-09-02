/*
Print Numbers from 1 to N:
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value Of N: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
*/


/*
Print Sum of Numbers from 1 to N:
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"The sum is equal to: "<<sum;
}
*/


/*
From 1 to N, find the sum of only even numbers:
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"The sum of all even Numbers is: "<<sum;
}
*/


/*
Check whether the given number is prime or not:
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the vlue of N: ";
    cin>>n;
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1)
    {
        cout<<"Not a Prime Number!!";
    }
    else
    {
        cout<<"A Prime Number!!";
    }
}
*/

