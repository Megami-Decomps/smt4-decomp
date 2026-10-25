#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

int FUN_002c58c8(int table, int index);

extern s8 DAT_0043dc70;

/* Loads the table on the first reference. */
void FUN_00211d00(void)
{
    s32 i;

    if (DAT_0043dc70 <= 0) {
        asdTMTexTableLoadSprites(19);
        i = 0;
        do {
            FUN_002c58c8(19, i);
            i++;
        } while (i < 8);
    }
    DAT_0043dc70 = DAT_0043dc70 + 1;
}

} /* extern "C" */
