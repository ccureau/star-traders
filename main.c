/*
 *
 */

#include <conio.h>

#include "globals.h"
#include "main.h"
#include "util.h"

void main()
{
  setup();
  center(scr_max_x, "S T A R  T R A D E R S !");
  draw_map();
}

void setup()
{
  screensize(&scr_max_x, &scr_max_y);
  populate_map();
}
