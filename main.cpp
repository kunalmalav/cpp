#include<iostream>

using namespace std;

int main()
{
    int A[10]={5,2,3,6,9,1,4,7,8,2};
    int key;

    cout<<"Enter key: ";
    cin>>key;

    for(int i=0;i<10;i++) {
        if (A[i] == key) {
            cout << "Key found at " << i << endl;
            return 0;
        }
    }

    cout << "Element not found!" << endl;
    return 0;
}
