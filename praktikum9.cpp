#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat; 

class LayangLayang {
private:
    double d1; 
    double d2; 
    double s1; 
    double s2; 

public:
    void input() {
        cout << "Masukkan diagonal 1 Layang-Layang: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 Layang-Layang: ";
        cin >> d2;
        cout << "Masukkan sisi 1 Layang-Layang: ";
        cin >> s1;
        cout << "Masukkan sisi 2 Layang-Layang: ";
        cin >> s2;
    }
