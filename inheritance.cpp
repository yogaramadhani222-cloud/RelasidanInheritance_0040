#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;
    orang(string pNama) 
    :nama(pNama)
    {
        cout << "Orang dibuat\"" << nama << "\"ada\n";
    }
    ~orang()
    {
        cout << "Orang dihapus\"" << nama << "\"tidak ada\n";
    }

    int jumlah(int a, int b)
    {
        return a + b;
    }

};