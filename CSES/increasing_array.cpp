// https://cses.fi/problemset/task/1094


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    long long n;
    cin>>n;
    vector <long long> list(n, 0);

    for (int i=0; i<n; i++) cin>>list[i];

    long long cnt = 0;
    for (int i=1; i<n; i++) 
    {
        if (list[i-1] > list[i])
        {
            cnt += (list[i-1] - list[i]);
            list[i] = list[i-1];
        }
    }
    cout<<cnt<<endl;

}