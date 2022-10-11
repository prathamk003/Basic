#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    std::cout << "Sum = " << a+b+c << endl << "Average = " << (a+b+c)/3 << endl;

    return 0;
}
