#include <iostream>
using namespace std;

#define FLOOP(i, a, b) for (int i=a; i<=b; i++)

int main(){

    for (int i=5; i<=10; i++) cout<<i<<" ";
    cout<<endl;
    FLOOP(i, 5, 10) cout<<i<<" ";
    cout<<endl;
}