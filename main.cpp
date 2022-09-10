#include<iostream>

using namespace std;

int main()
{
    int A[10]={5,2,3,6,9,1,4,7,8,2};

    int max;

    max=A[0];

    for(int i=1;i<10;i++)
    {
            if(A[i]>max)
            {
                max=A[i];
            }

    }
        cout<<max;
    return 0;
}
