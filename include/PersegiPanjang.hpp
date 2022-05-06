#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__


class PersegiPanjang{
private:
    float xmin;
    float xmax;
    float ymin;
    float ymax;

public:
    PersegiPanjang (float xmid, float ymid, float xlen, float ylen);
    PersegiPanjang operator + (PersegiPanjang);
    PersegiPanjang operator - (PersegiPanjang);
    void operator ++ ();
    void operator -- ();
    bool operator == (PersegiPanjang);
    float operator [] (int x);
    void printhasil ();
};

#endif