// https://cses.fi/problemset/task/3419

#include <iostream>
#include <vector> //for nxn matrix
using namespace std;
#define vec2_int(name, size, init) vector<vector<int>> name(size, vector<int>(size, init))

void xor_solution(int n){
    // From: https://www.youtube.com/watch?v=0JdizSAkdd8
    // We can prove that the mex value for cell (i, j) is i XOR j!
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<(i^j)<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n, seen;
    cin>>n;
    // xor_solution(n); // optimal solution O(n^2)
    vec2_int(mat, n, -1);

    // initialize the first row and first column
     for (int i=0; i<n; i++)
     {
        mat[i][0]= i;
        mat[0][i] = i;
        mat[i][i] = 0;
     }

    for (int i=1; i<n; i++)
        {
            for (int j=1; j<n; j++) 
            {
                if (i == j) 
                {
                    mat[i][j] = 0;
                    continue;
                }


                for (int curr_val = 1; curr_val <= 2*n; curr_val++){
                    seen = 0;
                    // check if this is in the row
                    for (int ii=0; ii<i; ii++){
                        if (mat[ii][j] == curr_val) 
                        {
                            seen = 1; break;
                        }
                    }

                    if (seen != 0) continue;

                    for (int jj=0; jj<j; jj++){
                        if (mat[i][jj] == curr_val)
                        {
                            seen = 1; break;
                        }
                    }

                    if (seen == 0) 
                    {
                        mat[i][j] = curr_val;
                        break;
                    }
                }




            }
            
        }

    for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++) cout<<mat[i][j]<<" ";
            cout<<"\n";
            
        }

}