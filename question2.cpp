
#include <iostream>
using namespace std;

double power(double d, int b=2) {
    double answer = 1.0;
    for (int i=0; i < b; i++) {
        answer *= d;
    }
    return answer;
}

int main() {
    double d;
    int b;

    cout << "Enter the number (n) ";
    cin >> d;
    cout << "Enter the power (p). Enter 0 to use default power ";
    cin >> b;

    if (b == 0) {
        cout <<  "power(n,p=2)=" << power(d) << endl;

    } else {
        cout << "power(n,p)=" << power(d,b) << endl;

    }
    return 0;
}


