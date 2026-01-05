//https://cses.fi/problemset/task/1083

#include <iostream>
#include <vector>
using namespace std;

int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, tmp;
    cin>>n;

    vector<bool> seen(n, false);

    for (int i=0; i<n-1; i++)
    {
        cin>>tmp;
        seen[tmp-1] = true;
    }

    for (int i=0; i<n; i++)
        if(seen[i] == false)
        {
            cout<<i+1;
            break;
        }
}