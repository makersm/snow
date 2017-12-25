#include <iostream>
#include <curses.h>
#include "CSnow.h"

using namespace std;

int main() {
    int y, x;
    initscr();
    curs_set(false);
    getmaxyx(stdscr, y, x);

    CSnow *snow = new CSnow(--y, --x);
    snow->showSnow();
    getch();
    endwin();
    return 0;
}
