#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() //agregasi
{
    ibu* varIbu = new ibu("Dini");
    ibu* varibu2 = new ibu("Novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak2);

    varIbu->cetakAnak();
    varibu2->cetakAnak();

    system("pause");
    return 0;
}
