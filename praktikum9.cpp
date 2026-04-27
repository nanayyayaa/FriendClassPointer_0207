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

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
    }

    friend class BelahKetupat; 
};

class BelahKetupat {
private:
    double d1;
    double d2; 
    double sisi; 

public:
    void input() {
        cout << "Masukkan diagonal 1 Belah Ketupat: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 Belah Ketupat: ";
        cin >> d2;
        cout << "Masukkan sisi Belah Ketupat: ";
        cin >> sisi;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling(LayangLayang &ll) {
        return 2 * (ll.s1 + ll.s2);
    }

    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
    }
};

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    cout << "--- Input Layang-Layang ---" << endl;
    ll.input();
    cout << "--- Input Belah Ketupat ---" << endl;
    bk.input();

    cout << "\n--- Hasil ---" << endl;
    ll.output();
    cout << "Keliling Layang-Layang yang diakses oleh Belah Ketupat: " << bk.keliling(ll) << endl;
    bk.output();

    return 0;
}