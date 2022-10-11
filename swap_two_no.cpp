#include <iostream>
using namespace std; 

int main() {
    int n,m;
    cout << "Enter" << endl;
    cin >> n >> m;
    n = n+m;
    m = n-m;
    n = n-m;
    cout << "After swap = " << n  << "\t << m <<endl;
}
