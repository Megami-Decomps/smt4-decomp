#include "gamedata/LevelTable.h"

extern "C" {

/* Spends experience from *remaining on level-ups starting at level `start` (up to 99); returns the
 * levels gained. */
int FUN_003c1de8(int start, u32 *remaining)
{
    int level = start;

    for (;;) {
        if (level == 99) {
            break;
        }
        u32 need = levelExpRequirement(level);
        if (need > *remaining) {
            break;
        }
        *remaining -= need;
        level++;
    }
    return level - start;
}

} /* extern "C" */
