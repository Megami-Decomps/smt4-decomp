#include "common.h"

struct Table {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 offset;
    /* 0x24 */ u8 unk24[0x94];
    /* 0xB8 */ u8 *base;
};

struct Owner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Table *table;
};

struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ Owner *owner;
};

/* The entry the table's offset points at, or NULL when it has none. */
extern "C" u8 *FUN_002cf338(Object *object)
{
    Table *table = object->owner->table;

    if (table->offset == 0) {
        return NULL;
    }
    return table->base + table->offset;
}
