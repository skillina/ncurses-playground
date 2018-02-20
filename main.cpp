#include <curses.h>
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    initscr();
    printw("Hello, world from ncurses");
    refresh();
    getch();
    endwin();
    return 0;
}
