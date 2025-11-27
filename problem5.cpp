#include <iostream>
#include <fstream>
using namespace std;
int main() {
    try {
        ifstream input("data.txt");
        if (!input.is_open()) {
            cout<<"File not found"<<endl;
        }
        int first;
        input>>first;
        cout<<first;
    }
    catch (const char* msg) {
        cout<<"Error: "<<msg;
    }
    return 0;
}