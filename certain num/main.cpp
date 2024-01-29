#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int numVal;
    int sum=0;
    cout << "Enter the number of values to operate";
    cin >> numVal;

    if (numVal <= 1) {
        cout << "The entered number of values is incorrect. Enter a valid value";
        return 1;
    }
    for (int i = 1; i <= numVal; i++) {
        int num;
        cout<<"Enter the "<<i<< " number";
        cin>> num;
        sum+=num;

    }
    cout<<sum;

    return 0;
}
