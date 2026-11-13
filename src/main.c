#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <panel.h>

int main(int argn, char **argv){

  initscr();
  refresh();
  wrefresh(stdscr);
  cbreak();
  keypad(stdscr, TRUE);
  echo();

  while(1){
    getch();
  }

  endwin();

}
