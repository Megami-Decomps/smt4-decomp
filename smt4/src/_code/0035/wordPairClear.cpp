#include "common.h"
#include "gamedata/WordPair.h"

extern "C" {

extern WordPair DAT_00471a50;

/* Clears the two words of the pair at DAT_00471a50; returns the last one written (0). */
u32 wordPairClear(void)
{
    DAT_00471a50.first = 0;
    DAT_00471a50.second = 0;
    return DAT_00471a50.second;
}

}
