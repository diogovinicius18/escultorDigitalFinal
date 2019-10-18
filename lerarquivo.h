#ifndef LERARQUIVO_H
#define LERARQUIVO_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include "figurageometrica.h"
#include "sculptor.h"
#include <vector>


class LerArquivo{
private:
    int dx, dy, dz;

public:
    Sculptor *x;
    vector<FiguraGeometrica*>fig;
    LerArquivo(string arquivoe);
    ~LerArquivo();
};

#endif // LERARQUIVO_H
