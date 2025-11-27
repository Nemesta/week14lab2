#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    try {
        if (b==0) {
            throw "Division by zero";
        }
        cout<<a/b;
    }
    catch(const char* msg) {
        cout<<"Error: "<<msg;

    }
    return 0;
}