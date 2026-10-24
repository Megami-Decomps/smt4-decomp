#include "common.h"

struct OffsetTable {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 offset;
    /* 0x24 */ u8 unk24[0x94];
    /* 0xb8 */ u8 *base;
};

struct OffsetHolder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ OffsetTable *table;
};

struct OffsetOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ OffsetHolder *holder;
};

extern "C" {

/* Virtual getter: the table's base advanced by its offset, or null when it has none. */
u8 *FUN_002df4b4(OffsetOwner *owner)
{
    OffsetTable *table = owner->holder->table;
    if (table->offset == 0) {
        return NULL;
    }
    return table->base + table->offset;
}

} /* extern "C" */
