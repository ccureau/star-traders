#include <conio.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "globals.h"
#include "types.h"

void center(unsigned char x, const char *str)
{
  unsigned char xpos = (x>>1) - (strlen(str)>>1);
  gotox(xpos);
  printf(str);
}

void populate_map() {
  unsigned char x = 0;
  unsigned char y;

  srand(time(NULL));
  for (; x < MAP_MAX_ROWS; ++x) {
    for (y=0; y < MAP_MAX_COLS; ++y) {
      if ((rand() % 20 + 1) == 10) {
        map[x][y] = STAR;
      } else {
        map[x][y] = EMPTY;
      }
    }
  }
}

void draw_map()
{
  unsigned char x = 0;
  unsigned char y;

  clrscr();
  center(scr_max_x, "MAP OF THE GALAXY\n");
  center(scr_max_x, "*******************\n");

  for (; x < MAP_MAX_ROWS; ++x) {
    for (y=0; y < MAP_MAX_COLS; ++y) {
      switch(map[x][y]) {
        case EMPTY: cputc('.'); break;
        case FORMING: cputc('+'); break;
        case STAR: cputc('*'); break;
        case ALTAIR: cputc('A'); break;
        case BETELGEUSE: cputc('B'); break;
        case CAPELLA: cputc('C'); break;
        case DENEBOLA: cputc('D'); break;
        case ERIDANI: cputc('E'); break;
      }
      cputs("  ");
    }
    printf("\n");
  }
}

void get_moves()
{
  unsigned char c = 0;
  unsigned char x;
  unsigned char y;

  for (; c < 5; ++c) {
    x = rand() % MAP_MAX_ROWS + 1;
    y = rand() % MAP_MAX_COLS + 1;


  }


}
