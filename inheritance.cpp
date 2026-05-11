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

class pelajar : public orang {
public:
    string sekolah;
    pelajar(string pNama, string pSekolah) :orang(pNama), sekolah(pSekolah)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
    ~pelajar()
    {
        cout << "Pelajar dihapus\n" << endl;
    }

    string perkenalan()
    {
        return "Halo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main(){
    return 0;
}