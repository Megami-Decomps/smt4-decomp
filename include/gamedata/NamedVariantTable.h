#ifndef GAMEDATA_NAMED_VARIANT_TABLE_H
#define GAMEDATA_NAMED_VARIANT_TABLE_H
#include "common.h"
#include <stddef.h>
struct NamedVariantTableKey {
    /* 0x00 */ u8 block;
    /* 0x01 */ u8 table;
    /* 0x02 */ char name[32];
};
struct NamedVariantTableEntry {
    u8 data[0x19C];
};
typedef char NamedVariantTableKeyLayoutCheck[sizeof(NamedVariantTableKey) == 0x22 &&
    offsetof(NamedVariantTableKey, name) == 2 ? 1 : -1];
#endif
