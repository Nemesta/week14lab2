#include <iostream>
using namespace std;
int thrower() {
    throw "Caught in main";
}
int main() {
    try {
        thrower();
    }
    catch (const char* e) {
        cout<<e<<endl;
    }

    return 0;
}