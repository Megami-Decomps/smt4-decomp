#include "common.h"

extern "C" {

int FUN_00152bec(u32 handle);

typedef struct MapEntry {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 handle;
    /* 0x40 */ u8 unk40[8];
} MapEntry;

extern MapEntry *DAT_00447e70;

/* Updates every active handle of the 24 entries. */
void FUN_001d3694(void)
{
    s32 i = 0;

    do {
        if (DAT_00447e70[i].handle != 0) {
            FUN_00152bec(DAT_00447e70[i].handle);
        }
        i++;
    } while (i < 0x18);
}

} /* extern "C" */
