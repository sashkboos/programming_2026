//https://cses.fi/problemset/task/1072/

#include <iostream>

using namespace std;


int main(){
    long long val_1, val_2, val_3, val_4, val_5, val_6, first_val;
    long long x;
    cin>>x;

    for (long long  k = 1; k <=x; k++)
    {
        if (k == 1 ) cout<<0;
        else if (k==2) cout<<6;
        else if (k==3) cout<<28;
        else if (k==4) cout<<96;
        else
        {
            val_1 = ((k-4)*(k-4))*8;
            val_2 = 16*(k-4);
            val_3 = 24*(k-4);
            val_4 = 8;
            val_5 = 24;
            val_6 = 16;
            first_val = ((k*k) * ((k*k) - 1))/2;

            cout<< first_val - ((val_1+val_2+val_3+val_4+val_5+val_6)/2);
        }
        cout<<"\n";
        
        
    }
    
}