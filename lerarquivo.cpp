#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "figurageometrica.h"
#include "putvoxel.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "cutvoxel.h"
#include "cutbox.h"
#include "cutsphere.h"
#include "cutellipsoid.h"
#include "lerarquivo.h"
#include "sculptor.h"

LerArquivo::LerArquivo(string arquivoe){

    stringstream aux;
    ifstream fin;
    string dados;

    fin.open("C:/Users/Diogo/Downloads/escultorDigital/arquivos/"+arquivoe+".txt");

    if(!fin.is_open()){
        cout << "Arquivo .txt não encontrado\n";
        exit(0);
    }

    while(fin.good()){

        getline(fin,dados);
        aux.clear();
        aux.str(dados);
        aux >> dados;

        if(dados.compare("dim")==0){
            aux >> dx >> dy >> dz;
            x = new Sculptor(dx, dy, dz);
        }
        else if(dados.compare("putvoxel")==0){
            cout << "Deu certo o PutVoxel" << endl;
            int x, y, z;
            float r, g, b, alpha;
            aux >> x >> y >> z >> r >> g >> b >> alpha;
            fig.push_back(new PutVoxel(x, y, z, r, g, b, alpha));
        }
        else if(dados.compare("cutvoxel")==0){
            cout << "Deu certo o CutVoxel" << endl;
            int x, y, z;
            aux >> x >> y >> z;
            fig.push_back(new CutVoxel(x ,y ,z));
        }
        else if(dados.compare("putbox")==0){
            cout << "Deu certo o PutBox" << endl;
            int xi, yi, zi, xf, yf, zf;
            float r, g, b, alpha;
            aux >> xi >> yi >> zi >> xf >> yf >> zf >> r >> g >> b >> alpha;
            fig.push_back(new PutBox(dx, dy, dz, xi, yi, zi, xf, yf, zf, r, g, b, alpha));
        }
        else if(dados.compare("cutbox")==0){
            cout << "Deu certo o CutBox" << endl;
            int xi,yi,zi,xf,yf,zf;
            aux >> xi >> yi >> zi >> xf >> yf >> zf;
            fig.push_back(new CutBox(dx, dy, dz, xi, yi, zi, xf, yf, zf));
        }
        else if(dados.compare("putsphere")==0){
            cout << "Deu certo o PutSphere" << endl;
            int x, y, z, radius;
            float r, g, b, alpha;
            aux >> x >> y >> z >> radius >> r >> g >> b >> alpha;
            fig.push_back(new PutSphere(dx, dy, dz, x, y, z, radius, r, g, b, alpha));
        }
        else if(dados.compare("cutsphere")==0){
            cout << "Deu certo o CutSphere" << endl;
            int x, y, z, radius;
            aux >> x >> y >> z >> radius;
            fig.push_back(new CutSphere(dx, dy, dz, x, y, z, radius));
        }
        else if(dados.compare("putellipsoid")==0){
            cout << "Deu certo o PutEllipsoid" << endl;
            int x, y, z, radiusx, radiusy, radiusz;
            float r, g, b, alpha;
            aux >> x >> y >> z >> radiusx >> radiusy >> radiusz >> r >> g >> b >> alpha;
            fig.push_back(new PutEllipsoid(dx, dy, dz, x, y, z, radiusx, radiusy, radiusz, r, g, b, alpha));
        }
        else if(dados.compare("cutellipsoid")==0){
            cout << "Deu certo o CutEllipsoid" << endl;
            int x, y, z, radiusx, radiusy, radiusz;
            aux >> x >> y >> z >> radiusx >> radiusy >> radiusz;
            fig.push_back(new CutEllipsoid(dx, dy, dz, x, y, z, radiusx, radiusy, radiusz));
        }
    }
    for(int i=0; i < fig.size(); i++)
        fig[i]->draw(*x);
}
LerArquivo::~LerArquivo(){

}
