#include <bits/stdc++.h>
using namespace std;

// void print()   //BASIC RECURSSION
// {
//     cout << "1";
//     print();
// }

void printOneToN(int i, int n) // print 1 to n using recursion
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printOneToN(i + 1, n);
}

// void print_n_to_One(int i, int n)  //print n to 1 using recursion
// {
//     if (n < i)
//         return;
//     cout << n << endl;
//     print_n_to_One(i, n - 1);
// }

int main()
{
    // print();
    int n = 10;

    printOneToN(1, n);
    // print_n_to_One(1, n);
    // printSum0fN();
    return 0;
}