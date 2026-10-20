#include "common.h"

extern "C" {

int asdMdlManagerMarkDestroy(u32 handle);

typedef struct HandleSlot {
    /* 0x0 */ u32 handle;
    /* 0x4 */ u32 unk4;
} HandleSlot;

/* One of 16 entries of 0x3C bytes; the table starts at 0x24 and overlaps the second HandleSlot's unk4. */
typedef struct Entry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x27];
    /* 0x28 */ u8 valid;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 handle;
    /* 0x30 */ u8 enabled;
    /* 0x31 */ u8 unk31[0xB];
} Entry;

typedef struct Work {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ HandleSlot slots[2];
} Work;

extern Work *DAT_00447a60;

void FUN_001fa6b8(void)
{
    s32 i = 0;
    Entry *entry;

    do {
        entry = (Entry *)((u8 *)DAT_00447a60 + 0x24) + i;
        if (entry->active != 0 && entry->valid != 0) {
            if (entry->enabled != 0 && entry->handle != 0) {
                asdMdlManagerMarkDestroy(entry->handle);
            }
        }
        i++;
    } while (i < 0x10);
    i = 0;
    do {
        if (DAT_00447a60->slots[i].handle != 0) {
            asdMdlManagerMarkDestroy(DAT_00447a60->slots[i].handle);
        }
        i++;
    } while (i < 2);
}

} /* extern "C" */
