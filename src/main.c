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
    int key = getch();
    if(key == KEY_UP)
     mvwprintw(stdscr, 7, 0, "You pressed the up arrow key");
    if(key == KEY_DOWN)
     mvwprintw(stdscr, 7, 0, "You pressed the down arrow key");
  }

  endwin();

}
