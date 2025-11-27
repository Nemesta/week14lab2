#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    try {
        if (a==0) {
            throw 0;
        }
    }
    catch (int e) {

    }
    cout<<"Done";
    return 0;
}