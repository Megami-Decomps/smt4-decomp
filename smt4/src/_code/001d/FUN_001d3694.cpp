#include "common.h"

extern "C" {

int asdMdlManagerMarkDestroy(u32 handle);

typedef struct MapEntry {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 handle;
    /* 0x40 */ u8 unk40[8];
} MapEntry;

extern MapEntry *g_mapObj;

/* Updates every active handle of the 24 entries. */
void FUN_001d3694(void)
{
    s32 i = 0;

    do {
        if (g_mapObj[i].handle != 0) {
            asdMdlManagerMarkDestroy(g_mapObj[i].handle);
        }
        i++;
    } while (i < 0x18);
}

} /* extern "C" */
