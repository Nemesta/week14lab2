#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    try {
        if (a>100) {
            throw a;
        }
        cout<<"No Error ;)"<<endl;
    }
    catch (int a) {
        cout<<"Error: "<<a<<endl;
    }
    return 0;
}