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

/* The entries of the table section named `name` (section zero when the name is unknown), `variant` and
   `invert` selecting one of the two variants. */
extern "C" NamedVariantTableEntry *namedVariantTableGetEntries(s32 variant, const char *name, s32 invert);

typedef char NamedVariantTableKeyLayoutCheck[sizeof(NamedVariantTableKey) == 0x22 &&
    offsetof(NamedVariantTableKey, name) == 2 ? 1 : -1];
#endif
