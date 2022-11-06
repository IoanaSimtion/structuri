#include "structuri.h"
#include "functii.h"

int main()
{
    Masina x;

    x.marca = "audi";
    x.an = 1993;
    x.model = "a4";

    Masina a;

    a.marca = "mercedes-benz";
    a.an = 2006;
    a.model = "e36";

    Masina b;

    b.marca = "volkswagen";
    b.an = 2012;
    b.model = "a43";

    Masina c;

    c.marca = "bmw";
    c.an = 2000;
    c.model = "e200";

    Masina masini[100] = { x,a,b,c };
    int d = 4;
    /*for (int i = 0; i < 4; i++) {
        cout << masini[i].marca << endl;
    }*/

    //afisareMarca(masini, 4);
    Masina masinaAnMax = celMaiMareAn(masini, d);
    cout << masinaAnMax.marca;
    
}

