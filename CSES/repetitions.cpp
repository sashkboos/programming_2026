//https://cses.fi/problemset/task/1069

#include <iostream>
using namespace std;


int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);


    string line;
    getline(cin, line);

    int max_size = 1;
    char curr_start = line[0];
    int cnt = 1;
    for (int i=1; i<line.size(); i++)
    {
        if (line[i] == curr_start) cnt+=1;
        else
        {
            if (max_size < cnt) max_size = cnt;
            curr_start = line[i];
            cnt = 1;
        }
    }
    if (max_size < cnt) max_size = cnt;
    cout<<max_size;
}