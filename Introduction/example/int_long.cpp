#include <iostream>
using namespace std;


int main(){

    int a_int = 123456789;
    long long a_long = 123456789;
    cout<<"Integer: " << a_int*a_int << "\n"; // Wronge due to overflow
    cout<<"Long Long: " << a_long*a_long << "\n";
    cout<<"Integer with Casting: " <<(long long)a_int*a_int << "\n";
}