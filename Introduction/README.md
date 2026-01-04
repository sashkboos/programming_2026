# Chapter 1: Introduction


- You can compile the code using the following command:
  ```
  g++ -std=c++11 -O2 -Wall test.cpp -o test
  ```

- `ios_base::sync_with_stdio(0);` Is used to stop synchronization between the C and C++ standard streams. Using this, one should not mix C and C++ style I/O (like `printf` with `cout` or `scanf` with `cin`). 

- `cin.tie(0);` Unties `cin` from `cout`, meaning that `cout` will not be flushed automatically before a `cin` operation. This can improve performance when performing many input operations without needing to output in between.

- Following loop reads the data until there is no more data available in the input.
  ```cpp
  int x;
  while (cin >> x) {
      // Process x
  }
  ```

- The inputs could be from a file. One can read the input from the file in C++ using:
    ```cpp
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   int x;
   cin >> x;
   cout << x+2;
    ```

- `int` has values in the range of [-2,147,483,648 to 2,147,483,647] (32 bits integers).
- `long long` has values in the range of [-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807] (64 bits integers).
- The result of multiplying two `int` values is also an `int`. So `a*a` may overflow if `a` is large.

- Modular arithmetic: Take reminder before every single operation:

    - `(a + b) mod m = (a mod m + b mod m) mod m`
    - `(a− b) mod m = (a mod m− b mod m) mod m`
    - `(a· b) mod m = (a mod m· b mod m) mod m`
    - When subtraction operation exist in the code, check for the negarive value and add `m` to the negative value before  next operation.


- Using command `typedef` helps to shorten the code:
    - `typedef long long ll; ll a;`
    - `typedef vector<int> vi;`
    - `typedef pair<int,int> pi;`

- `Macro` is a certain string in the code which is defined using `#define` keyword:

    - `#define PB push_back`
    - With Argument: `#define REP(i,a,b) for (int i = a; i <= b; i++)`

- Summation formulas:
    - `1 + 2 + 3 + ... + n = n(n + 1) / 2`
    - `1^2 + 2^2 + 3^2 + ... + n^2 = n(n + 1)(2n + 1) / 6`
    - If we have `n` numbers `a+...+b`, their sum would be `n(a+b)/2`
    - `a + ak + ak^2 + ... + b = (bk-a)/(k-1)` where `k != 1`
        - In more general form: `a + ak + ak^2 + ... = a/(1-k)` where `|k| < 1`
    - A harmonic sum is a sum of the form `Hn = 1 + 1/2 + 1/3 + ... + 1/n <= log(n)+1`.