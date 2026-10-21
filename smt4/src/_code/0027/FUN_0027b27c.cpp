#include "common.h"

extern "C" {

int FUN_002d2efc(u8 *entry);

typedef struct Work {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 entries[0x10][0x3C];
} Work;

extern Work *g_mapRangeWork;

void FUN_0027b27c(void)
{
    int i = 0;
    u8 *entry;

    do {
        Work *work = g_mapRangeWork;

        entry = work->entries[i];
        if (*entry != 0) {
            FUN_002d2efc(entry);
        }
        i = i + 1;
    } while (i < 0x10);
}

} /* extern "C" */
