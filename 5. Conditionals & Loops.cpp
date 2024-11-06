#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter value for n: " <<endl;
    cin>>n;
    cout<< "Value of n is: " << n <<endl;


    if (n > 0) {
        cout<< "n is positive" <<endl;
    } else {
        cout<< "n is negative" <<endl;
    }

    //cin does not consider "_", "\t", "\n"
    int a,b;
    cout<< "Enter value for a: " <<endl;
    cin>> a;
    cout << "Enter value for b: " <<endl;
    cin>> b;
    cout<< "Value of a and b is: " << a << " and " << b << endl;

    //cin.get() method
    //execute in another file...
    /*
    #include <iostream>
    using namespace std;

    int main() {
        int x;
        cout<< "Enter value for x: " << endl;
        x = cin.get();
        cout<< "Value of x is: " << x << endl;
    }
    */
    int x;
    cout<< "Enter value for x: " << endl;
    x = cin.get();
    cout<< "Value of x is: " << x << endl;
}