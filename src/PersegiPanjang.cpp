#include <iostream>
#include <math.h>

#include "include/PersegiPanjang.hpp"

using namespace std;

PersegiPanjang::PersegiPanjang (float xmid, float ymid, float xlen, float ylen) {
    this-> xmin = xmid - (xlen/2);
    this-> xmax = xmid + (xlen/2);
    this-> ymin = ymid - (ylen/2);
    this-> ymax = ymid + (ylen/2);
}

void PersegiPanjang::printhasil (){
    float Xlen = this->xmax - this->xmin;
    float Ylen = this->ymax - this->ymin;

    cout << "Titik Tengah x : " << (this->xmax - this->xmin)/2 + this->xmin << endl;
    cout << "Titik Tengah y : " << (this->ymax - this->ymin)/2 + this->ymin << endl;
    cout << "Panjang : " << Xlen << endl;
    cout << "Lebar : " << Ylen << endl;
    cout << "Titik X Maksimal : " << this->xmax << endl;
    cout << "Titik X Minimal : " << this->xmin << endl;
    cout << "Titik Y Maksimal : " << this->ymax << endl;
    cout << "Titik Y Minimal : " << this->ymin << endl;

}

bool PersegiPanjang::operator == (PersegiPanjang PP2){
    if (this->xmax > PP2.xmin && this->xmin < PP2.xmax && this-> ymax > PP2.ymin && this->ymin < PP2.ymax) {
        return true;
    }
    else {
        return false;
    }
}

PersegiPanjang PersegiPanjang::operator + (PersegiPanjang PP2){
    PersegiPanjang PPsem (0,0,0,0);
    
    if(this->xmin < PP2.xmin) {
        PPsem.xmin = this->xmin;
    }
    else {
        PPsem.xmin = PP2.xmin;
    }

    if(this->xmax > PP2.xmax){
        PPsem.xmax = this->xmax;
    }
    else {
        PPsem.xmax = PP2.xmax;
    }

    if(this->ymin < PP2.ymin) {
        PPsem.ymin = this->ymin;
    }
    else {
        PPsem.ymin = PP2.ymin;
    }

    if(this->ymax > PP2.ymax){
        PPsem.ymax = this->ymax;
    }
    else {
        PPsem.ymax = PP2.ymax;
    }

    return PPsem;
}

PersegiPanjang PersegiPanjang::operator - (PersegiPanjang PP2){
    PersegiPanjang PPsem(0,0,0,0);
    
    if(this->xmin > PP2.xmin) {
        PPsem.xmin = this->xmin;
    }
    else {
        PPsem.xmin = PP2.xmin;
    }

    if(this->xmax < PP2.xmax){
        PPsem.xmax = this->xmax;
    }
    else {
        PPsem.xmax = PP2.xmax;
    }

    if(this->ymin > PP2.ymin) {
        PPsem.ymin = this->ymin;
    }
    else {
        PPsem.ymin = PP2.ymin;
    }

    if(this->ymax < PP2.ymax){
        PPsem.ymax = this->ymax;
    }
    else {
        PPsem.ymax = PP2.ymax;
    }

    return PPsem;
}

void PersegiPanjang::operator ++ () {
    
    float xmid, ymid, xlen, ylen;
    xlen = this->xmax - this->xmin;
    ylen = this->ymax - this->ymin;
    xmid = this-> xmin + (xlen/2);
    ymid = this-> ymin + (ylen/2);

    xlen *= 2;
    ylen *= 2;
    this-> xmin = xmid - (xlen/2);
    this-> xmax = xmid + (xlen/2);
    this-> ymin = ymid - (ylen/2);
    this-> ymax = ymid + (ylen/2);
}

void PersegiPanjang::operator -- () {
    
    float xmid, ymid, xlen, ylen;
    xlen = this->xmax - this->xmin;
    ylen = this->ymax - this->ymin;
    xmid = this-> xmin + (xlen/2);
    ymid = this-> ymin + (ylen/2);

    xlen /= 2;
    ylen /= 2;
    this-> xmin = xmid - (xlen/2);
    this-> xmax = xmid + (xlen/2);
    this-> ymin = ymid - (ylen/2);
    this-> ymax = ymid + (ylen/2);
}

float PersegiPanjang::operator [] (int x) {
    switch (x)
    {
    case 1 :
        return this-> xmax;
        break;
    
    case 2 :
        return this-> xmin;
        break;

    case 3 :
        return this-> ymax;
        break;

    case 4 :
        return this-> ymin;
        break;

    default:
        break;
    }
}