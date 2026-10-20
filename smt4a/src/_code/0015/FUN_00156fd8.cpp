#include "common.h"

extern "C" {

extern u32 DAT_005b3d1c[];

typedef struct Entry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 index;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 value;
} Entry;

/* Initialises an entry for table slot `index`: everything cleared except the index and the word looked up in the table at 0x5B3D1C. */
void FUN_00156fd8(Entry *entry, s32 index)
{
    entry->index = (u8)index;
    entry->unk00 = 0;
    entry->unk08 = 0;
    entry->unk0C = 0;
    entry->unk10 = 0;
    entry->unk14 = 0;
    entry->value = DAT_005b3d1c[index];
}

} /* extern "C" */
