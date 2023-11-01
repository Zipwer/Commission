#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long k;
    cout << "Entry num: \n";
    cin >> k;

    double commission = 25 + 0.01 * k; 
    commission = max(100.0, min(commission, 2000.0)); 

    cout << fixed << setprecision(2) << commission << endl; 

    return 0;
}
