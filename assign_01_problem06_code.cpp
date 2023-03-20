//abdulrahman alsaeed
//20216409
#include <iostream>
using namespace std;
 
int main() {
    int k;
    cin >> k;
    
    int firstDigit = k / 1000;
    if (firstDigit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    
    return 0;
}