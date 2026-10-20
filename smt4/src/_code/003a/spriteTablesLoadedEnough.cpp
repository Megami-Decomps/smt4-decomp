#include "common.h"

extern "C" {

extern int asdTMTexTableNodeIsLoaded(u32 table, int index);

/* 1 when at least 9 of the 5 + 4 sprites of tables 0x14 and 0x15 are loaded. */
u8 spriteTablesLoadedEnough(void)
{
    int loaded = 0;
    int i = 0;

    do {
        if (asdTMTexTableNodeIsLoaded(0x14, i) != 0) {
            loaded = loaded + 1;
        }
        i = i + 1;
    } while (i < 5);
    i = 0;
    do {
        if (asdTMTexTableNodeIsLoaded(0x15, i) != 0) {
            loaded = loaded + 1;
        }
        i = i + 1;
    } while (i < 4);
    return loaded >= 9;
}

} /* extern "C" */
