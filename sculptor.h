#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <cmath>
#include <iostream>
#include <cstdlib>
#include "vector"

using namespace std;

struct Voxel {
  float vermelho,verde,azul, transparencia;
  bool temBloco;
};

class Sculptor{
protected:
    Voxel ***v;
    int nLinhas, nColunas,nPlanos, dx, dy, dz;
    float r, g, b, a;
public:
    Sculptor(int xe,int ye,int ze);
    ~Sculptor();
    void SetColor(float r,float g,float b,float a);
    void PutVoxel(int x,int y,int z);
    void CutVoxel(int x,int y,int z);
    void WriteOFF(string arquivo);
    void WriteVECT(string arquivo);
};

#endif // SCULPTOR_H
