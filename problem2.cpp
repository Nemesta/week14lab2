#include <iostream>
using namespace std;
int main() {
    int arr[5];
    for(int i=0;i<5;i++) {
        arr[i]= (i+1)*10;
    }
    int a;
    cin>>a;
    try {
        if (a<0||a>4) {
            cout<<"Out of range";
        }
        cout<<arr[a];
    }
    catch (const char* msg) {
        cout<<"Error: " <<msg;
    }
    return 0;
}