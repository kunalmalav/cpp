#include<iostream>
using namespace std;

int main()
{
    int x=11,y=5,z;
    int a=11,b=7,c;
    int d=11,e=7,f;
    char j=5,h;
    char i=20,k;
    char m=5,n;

//FOR AND BIT
    z=x&y;
    cout<<z<<endl;

//FOR OR BIT
    c=a|b;
    cout<<c<<endl;

//FOR X-OR BIT
    f=d^e;
    cout<<f<<endl;

//FOR LEFTSHIFTING CHARACTERS
    h=j<<1;
    cout<<(int)h<<endl;

//FOR RIGHTSHIFTING A CHARACTER
    k=i>>1;
    cout<<k<<endl;

//FOR NOT
    n=~m;
    cout<<n<<endl;
    return 0;
}
