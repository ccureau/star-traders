/*
 *
 */

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include "types.h"

#define MAP_MAX_COLS 12
#define MAP_MAX_ROWS 9

/*
 * 'globals'
 */

extern UCHAR                  scr_max_x;
extern UCHAR                  scr_max_y;

extern map_objects            map[MAP_MAX_ROWS][MAP_MAX_COLS];

extern UCHAR                  valid_moves[10];

#endif
