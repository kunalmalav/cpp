#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Type a number :";
    cin>>n;
    if(n&1)
    //write condition here to check "odd" or "even"
    {
    cout<<"odd";
    }
    else
    {
        cout<<"even";
    }

    return 0;
}
