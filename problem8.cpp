#include <iostream>
using namespace std;
class MyError {
    public:
    string Error;
};
int main() {
    MyError r1;
    r1.Error = "Error: Odd ";
    int a;
    cin>>a;
    try {
        if(a%2==1) {
            throw r1.Error;
        }
        cout<<"Even";
    }
    catch (string e) {
        cout<<e;
    }
    return 0;
}