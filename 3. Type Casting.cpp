#include <iostream>
using namespace std;

int main() {
    //char to int
    int a = 'a';
    cout<< a <<endl;

    //int to char
    char A = 65;
    cout<< A <<endl;

    /*
    int to char conversion but the int overflows
    the char so the last byte is considered.
    here "64" hence @ is printed.
    */
    char ch = 123456;
    cout<< ch << endl;
}