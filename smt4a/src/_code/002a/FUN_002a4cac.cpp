#include "common.h"

extern "C" {

void asdTMTexTableLoadTmx(s32 table, s32 flag);
void FUN_001acf98(s32 table, s32 index);
extern s8 DAT_0057f250;

/* Counts one more user of texture table 7: the first user (count 0 or less) loads it and runs FUN_001acf98 on its six entries. */
void FUN_002a4cac(void)
{
    s32 i;

    if (DAT_0057f250 <= 0) {
        asdTMTexTableLoadTmx(7, 0);
        i = 0;
        do {
            FUN_001acf98(7, i);
            i = i + 1;
        } while (i < 6);
    }
    DAT_0057f250 = DAT_0057f250 + 1;
}

} /* extern "C" */
