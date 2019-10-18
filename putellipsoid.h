#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutEllipsoid : public FiguraGeometrica{
protected:
    int centroX, centroY, centroZ , raioX, raioY, raioZ;
    float r ,g, b, dx, dy, dz, alpha;
public:
    PutEllipsoid(int dxe,int dye,int dze,int centroXe,int centroYe,int centroZe,int raioXe
                 ,int raioYe,int raioZe, float re, float ge, float be,float alphae);
    ~PutEllipsoid();
    void draw(Sculptor &d);
};

#endif // PUTELLIPSOID_H
