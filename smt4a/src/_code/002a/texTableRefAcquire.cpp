#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

void asdTMTexTableLoadTmx(s32 table, s32 flag);
extern s8 DAT_0057f250;

/* Counts one more user of texture table 7: the first user (count 0 or less) loads it and runs asdTMTexLoadMainHeap on its six entries. */
void texTableRefAcquire(void)
{
    s32 i;

    if (DAT_0057f250 <= 0) {
        asdTMTexTableLoadTmx(7, 0);
        i = 0;
        do {
            asdTMTexLoadMainHeap(7, i);
            i = i + 1;
        } while (i < 6);
    }
    DAT_0057f250 = DAT_0057f250 + 1;
}

} /* extern "C" */
