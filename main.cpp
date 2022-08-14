#include<iostream>

using namespace std;

int main()
{
//write conditional statement here to print "positive" or "negative"
    int n;
    cout<<"enter a integer";
    cin>>n;
    if(n*-1>0)
    {
        cout<<"negative";
    }
    else
    {
        cout<<"positive";
    }
    return 0;
}
