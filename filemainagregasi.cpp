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

    
    system("pause");
    return 0;
}
