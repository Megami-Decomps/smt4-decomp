#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 first;
    /* 0x10 */ u8 unk10[0x0C];
    /* 0x1C */ u32 second;
    /* 0x20 */ u8 unk20[0x0C];
    /* 0x2C */ u32 third;
} Entry;                        /* 0x30 */

typedef struct EntryList {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Entry *entries;
} EntryList;

typedef struct NameTable {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 member70[1];
} NameTable;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ EntryList *list;
    /* 0x10C */ u8 unk10C[0x104];
    /* 0x210 */ NameTable *names;
} Owner;

s32 FUN_001a7a20(u8 *table, u32 name, u32 length);
u32 libc_strlen(u32 name);

/* Looks `name` up in the owner's name table and, if found, copies the three words at 0xC, 0x1C and 0x2C of its entry into `out`. Returns whether it was found. */
u8 lookupNameEntry(Owner *owner, u32 name, u32 *out)
{
    s32 index;
    u32 length;
    Entry *entry;
    u8 *base = owner->names->member70;

    length = libc_strlen(name);
    index = FUN_001a7a20(base + 4, name, length);
    if (index != 0xFFFF) {
        entry = &owner->list->entries[index];
        out[0] = entry->first;
        out[1] = entry->second;
        out[2] = entry->third;
    }
    return index != 0xFFFF;
}

} /* extern "C" */
