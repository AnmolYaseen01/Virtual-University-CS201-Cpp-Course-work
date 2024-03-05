#include <iostream>
using namespace std;

double RaiseToPow(double x, int power) {
    double result = 1.0;
    
    for (int i = 1; i <= power; i++) {
        result *= x;
    }
    
    return result;
}

int main() {
    double x;
    int i;
    cout << "Please enter the number: ";
    cin >> x;
    cout << "Please enter the integer power you want this number raised to: ";
    cin >> i;
    cout << x << " raised to power " << i << " is equal to: " << RaiseToPow(x, i) << endl;
}

