#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer : ";
    cin>>n;

    for(int i=2 ; i<n ; i++)
    {
        bool is_prime=false;

        for(int j=2 ; j<=i-1 ; j++)
        {
            if(i%j==0)
            {
                is_prime=true;
                break;
            }
        }
        if(is_prime==false)
        {
            cout<<i<<" ";
        }   
    }
}