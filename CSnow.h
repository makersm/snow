//
// Created by somin on 16. 3. 13.
//

#ifndef SNOW_CSNOW_H
#define SNOW_CSNOW_H

#include <list>


class CSnow {
    int max_y, max_x;
    class snow {
        int y, x;
    public:
        snow(int y, int x): y(y), x(x){}
        int gety() {return y;}
        int getx() {return x;}
        void sety(int y) {this->y = y;}
        void setx(int x) {this->x = x;}
    };
    std::list<snow*> *snowList;


public:
    void showSnow();


    CSnow(int y, int x);
};


#endif //SNOW_CSNOW_H
