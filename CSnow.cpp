//
// Created by somin on 16. 3. 13.
//

#include "CSnow.h"
#include <curses.h>
#include <random>
#include <unistd.h>

void CSnow::showSnow() {
    for (; ;) {
        erase();
        for (std::list<snow *>::iterator iter = snowList->begin(); iter != snowList->end(); iter++) {
            (*iter)->sety((*iter)->gety() + 1);
            (*iter)->setx((*iter)->getx() + pow(-1, rand() % 2));
            mvaddch((*iter)->gety(), (*iter)->getx(), '*');
            refresh();
        }

        int num = rand() % 10;
        for (int i = 0; i < num; i++) {
            int status = rand() % max_x;
            snowList->push_front(new snow(1, status));
            mvaddch(1, status, '*');
        }
        refresh();
        usleep(100 * 1000);
    }

}

CSnow::CSnow(int y, int x) : max_y(y), max_x(x) {
    snowList = new std::list<snow *>;
}
