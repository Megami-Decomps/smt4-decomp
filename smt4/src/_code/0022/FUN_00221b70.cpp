#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0xD8];
    /* 0xD8 */ s32 unkD8;
} Entry;

extern int DAT_00433278;
extern Entry *FUN_001ed250(int index);

u32 FUN_00221b70(int index)
{
    Entry *entry;
    u32 result;

    if (((DAT_00433278 - index) - 1 < 0) || (entry = FUN_001ed250(index), entry->unkD8 <= 0)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
