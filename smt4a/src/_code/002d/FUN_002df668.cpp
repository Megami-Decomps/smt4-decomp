#include "battle/BtlUiGlobal.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void btlDrawFloatingNumbers(void *object, s32 flag);


/* Counts how many of the six entries of table 0xC and the five of table 0xD are set, and runs btlDrawFloatingNumbers(object, 0) when there are 11 or more (and an object exists); always returns 0. */
u32 FUN_002df668(void)
{
    s32 flag;
    s32 i;
    s32 count;
    void *object;

    object = g_btlUi.ui;
    if (object != NULL) {
        count = 0;
        i = count;
        do {
            flag = asdTMTexTableNodeIsLoaded(0xC, i);
            if (flag != 0) {
                count = count + 1;
            }
            i = i + 1;
        } while (i < 6);
        i = 0;
        do {
            flag = asdTMTexTableNodeIsLoaded(0xD, i);
            if (flag != 0) {
                count = count + 1;
            }
            i = i + 1;
        } while (i < 5);
        if (count >= 11) {
            btlDrawFloatingNumbers(object, 0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
