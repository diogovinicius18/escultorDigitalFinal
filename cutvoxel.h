#ifndef CUTVOXEL_H
#define CUTVOXEL_H


#include "figurageometrica.h"


class CutVoxel : public FiguraGeometrica
{
protected:
    int x, y, z;
public:
    CutVoxel(int xe,int ye,int ze);
    ~CutVoxel();
    void draw(Sculptor &d);
};


#endif // CUTVOXEL_H
