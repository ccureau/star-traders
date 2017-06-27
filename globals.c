/*
 *
 */

#include "globals.h"
#include "types.h"

UCHAR           scr_max_x;
UCHAR           scr_max_y;

/*
 * Star Map is a 9x12 grid
 */
map_objects     map[MAP_MAX_ROWS][MAP_MAX_COLS];

/*
 * List of valid moves for player turn
 */
UCHAR           valid_moves[10];
