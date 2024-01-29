#include <iostream>
#include <math.h>

using namespace std;


int main() {

    float a, b;
    char oper;

    cout<<"Enter the numbers";
    cin>>a>>b;
    float sum = a+b;
    float diff = a-b;
    float mult = a*b;
    float div = a/b;


    cout<<"Enter the operator";
    cin>>oper;
    if (oper=='+') {
        cout<<sum;
    }
    else if(oper=='-'){
        cout<<diff;
    }
    else if(oper=='*') {
        cout<<mult;
    }
    else if(oper=='/') {
        cout<<div ;
    }




    return 0;
}
