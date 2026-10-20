#include "common.h"

extern "C" {

void FUN_003210bc(void *object, s32 flag);
s32 asdTMTexTableNodeIsLoaded(u32 table, s32 index);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *object;
} Holder;

extern Holder g_btlUi;

/* Counts how many of the six entries of table 0xC and the five of table 0xD are set, and runs FUN_003210bc(object, 0) when there are 11 or more (and an object exists); always returns 0. */
u32 FUN_002df668(void)
{
    s32 flag;
    s32 i;
    s32 count;
    void *object;

    object = g_btlUi.object;
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
            FUN_003210bc(object, 0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
