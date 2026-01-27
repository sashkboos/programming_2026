// https://cses.fi/problemset/task/1071

// My solution was too slow. This is because I wanted to generate the numbers one by one and it took too much time
// I added this as (my_solution function)


#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;


char next_move_generator(
    int curr_row, 
    int curr_col
    ){

    char next_move = 'o';

    if (curr_row ==0)
    {
        if (curr_col % 2 == 0) next_move = 'r';
        else next_move = 'd';
    }

    else if (curr_col == 0)
    {
        if (curr_row % 2  == 1)
        {
            next_move = 'd';
        }
        else next_move = 'r';
        
    } 
    else if (curr_row == curr_col)
    {
        if (curr_row % 2 == 0) next_move = 'u';
        else next_move = 'l';
    }
    
    else if (curr_row > curr_col) //left or right
    {
        if (curr_row % 2 == 0) next_move = 'r';
        else next_move = 'l';
    }
    else //up or down
    {
        if (curr_col % 2 == 0) next_move = 'u';
        else next_move = 'd';
        
    }

    

    return next_move;
    
}


void my_solution(ll y, ll x)
{
    int asked_col = x;
    int asked_row = y;
    int curr_row, curr_col, cnt;
    char curr_move = 'r';
    char next_move = 'O';

        // curr_row = min(y-1, x-1);
        // curr_col = min(y-1, x-1);
        // cnt = ((curr_row+1)*(curr_row))+ 1;

        if (asked_col == asked_row)
        {
            cout<<((asked_col)*(asked_col-1)) + 1<<endl;
            return;
        }
        
        if (asked_row > asked_col) //lower triangular part -> go from the row
        {
            curr_row = asked_row - 2;
            curr_col = 0;
            if (curr_row % 2 == 0)
            {
                curr_row -= 1;
            }
            cnt = (curr_row+1)*(curr_row+1);
            
        }
        else
        {
            curr_col = asked_col - 2;
            curr_row = 0;
            if (curr_col % 2 != 0)
            {
                curr_col -= 1;
            }
            cnt = (curr_col+1) * (curr_col+1); 
            
            
        }

        while (curr_row != asked_row-1 or curr_col != asked_col-1){
            next_move = next_move_generator(curr_row, curr_col);
            curr_move = next_move;
            if (curr_move == 'r') curr_col +=1;
            else if (curr_move == 'l') curr_col -= 1;
            else if (curr_move == 'u') curr_row -= 1;
            else curr_row += 1;
            cnt += 1;  
        }

        cout<<cnt<<endl;

}

// Function to compute the value at position (Y, X) in the
// number spiral
void NumberSpiral(ll Y, ll X)
{
    // If Y is greater than X, implying Yth row is the outer
    // boundary
    if (Y > X) {
        // Compute the area of the inner square
        ll ans = (Y - 1) * (Y - 1);
        ll add = 0;

        // Check parity of Y to determine if numbers are in
        // increasing or decreasing order
        if (Y % 2 != 0) {
            // Add X to the area if Yth row is odd
            add = X;
        }
        else {
            // Add 2*Y - X to the area if Yth row is even
            add = 2 * Y - X;
        }
        // Print the final result
        cout << ans + add << "\n";
    }
    // If X is greater than or equal to Y, implying Xth
    // column is the outer boundary
    else {

        // Compute the area of the inner square
        ll ans = (X - 1) * (X - 1);
        ll add = 0;

        // Check parity of X to determine if numbers are in
        // increasing or decreasing order
        if (X % 2 == 0) {
            // Add Y to the area if Xth column is even
            add = Y;
        }
        else {
            // Add 2*X - Y to the area if Xth column is odd
            add = 2 * X - Y;
        }
        // Print the final result
        cout << ans + add << "\n";
    }
}


int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    // long long  t, row_id, col_id, x;
    // cin>>t;

    // vector <vector <long long>> input_pairs(
    //     t, 
    //     std::vector<long long>(2)
    // );
    
    // x = -1;
    // for (size_t i = 0; i < t; i++)
    // {
    //     cin>>input_pairs[i][0]>>input_pairs[i][1];
    //     if (input_pairs[i][0] > x) x = input_pairs[i][0];
    //     if (input_pairs[i][1] > x) x = input_pairs[i][1];
    // }
    int t;

    cin >> t;

    char curr_move, next_move;
    long long  cnt, curr_row, curr_col, asked_row, asked_col;
    
    for (int i = 0; i < t; i++)
    {
        cin >> asked_row >> asked_col;
        NumberSpiral(asked_row, asked_col);
        my_solution(asked_row, asked_col);
        continue;
       
    }

    
}   