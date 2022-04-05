#include <conio.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "globals.h"
#include "types.h"

void center(UCHAR x, const char *str)
{
  UCHAR xpos = (x>>1) - (strlen(str)>>1);
  gotox(xpos);
  printf(str);
}

void populate_map() {
  UCHAR x = 0;
  UCHAR y;

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
  UCHAR x = 0;
  UCHAR y;

  clrscr();
  center(scr_max_x, "MAP OF THE GALAXY\n");
  center(scr_max_x, "*******************\n\n");

  // draw header
  printf("   A  B  C  D  E  F  G  H  I  J  K  L\n");

  for (; x < MAP_MAX_ROWS; ++x) {
    cprintf(" %d ", x+1);
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
  UCHAR c = 0;
  UCHAR x;
  UCHAR y;

  for (; c < 5; ++c) {
    x = rand() % MAP_MAX_ROWS + 1;
    y = rand() % MAP_MAX_COLS + 1;

  }


}
