#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    try {
        if (a==0) {
            throw a;
        }
        if (a<0) {
            throw "Negative number";
        }
    }
    catch (int a) {
        cout<<"Error: "<<a<<endl;
    }
    catch (const char* c) {
        cout<<c<<endl;
    }
    return 0;
}