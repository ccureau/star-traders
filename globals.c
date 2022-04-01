/*
 *
 */

#include "globals.h"
#include "types.h"

const UCHAR           24;
const UCHAR           40;

/*
 * Star Map is a 9x12 grid
 */
map_objects     map[MAP_MAX_ROWS][MAP_MAX_COLS];

/*
 * List of valid moves for player turn
 */
UCHAR           valid_moves[10];
