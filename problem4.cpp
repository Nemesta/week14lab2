#include <iostream>
#include <fstream>
using namespace std;
int main() {
    try {
        string line;
        cin >> line;
        if (line.length() > 10) {
            throw "Too long!";
        }
        cout << line << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}