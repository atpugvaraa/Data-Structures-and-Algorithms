#include <iostream>
using namespace std;

int main() {
    //int/int
    int a = 2/5;
    cout<< a <<endl;

    //float/int
    float b = 2.0/5;
    cout<< b <<endl;

    /*
    Relational Operators
    ==, >, <, >=, <=, !=
    */
   int A = 2;
   int B = 3;

   bool equal_to = (a==b);
   cout<< equal_to <<endl;

   bool greater_than = (a>b);
   cout<< greater_than <<endl;

   bool lesser_than = (a<b);
   cout<< lesser_than <<endl;

   bool greater_than_equal_to = (a>=b);
   cout<< greater_than_equal_to <<endl;

   bool lesser_than_equal_to = (a<=b);
   cout<< lesser_than_equal_to <<endl;

   bool not_equal_to = (a!=b);
   cout<< not_equal_to <<endl;

   cout<< "0 = false and 1 = true"<< endl;
}