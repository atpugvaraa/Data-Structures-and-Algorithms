#include <iostream>
using namespace std;

int main() {
    int a = 123;
    cout << a << endl;

    char v = 'v';
    cout << v << endl;

    bool boolean = true;
    cout << boolean << endl;

    float f = 1.2;
    cout<< f <<endl;

    double d =  1.23;
    cout<< d <<endl;

    int size1 = sizeof(a);
    cout<< "Size of a is: " << size1 <<endl;

    int size2 = sizeof(v);
    cout<< "Size of v is: " << size2 <<endl;

    int size3 = sizeof(boolean);
    cout<< "Size of boolean is: " << size3 << endl;

    int size4 = sizeof(f);
    cout<< "Size of f is: " << size4 << endl;

    int size5 = sizeof(d);
    cout<< "Size of d is: " << size5 <<endl;
}