#include <iostream>
#include "figurageometrica.h"
#include "sculptor.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "lerarquivo.h"
#include "sstream"
#include <fstream>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>




using namespace std;

int main()
{

    char teclado[50];

    cout << "Digite o nome do arquivo" << endl;
    cin.getline(teclado, 100);

    Sculptor *x(LerArquivo (teclado).x);

    x->WriteOFF(teclado);
    x->WriteVECT(teclado);


    return 0;
}
