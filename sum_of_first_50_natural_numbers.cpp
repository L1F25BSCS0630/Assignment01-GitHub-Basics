/*
Program: Sum of First 50 Natural Numbers
Name: Shariq waseem 
Registration Number: L1F25BSCS0630
Assignment: Programming Fundamentals - Assignment 1
Formula: Sum = n * (n + 1) / 2
For n = 50: Sum = 50 * 51 / 2 = 1275
*/
#include <iostream>
using namespace std;

int main() {
    const int N = 50;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum of first " << N << " natural numbers (loop): " << sum << endl;

    return 0;
}
