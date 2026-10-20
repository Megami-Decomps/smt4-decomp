/* A table of 0x2c-byte entries whose objects have vtables; entry objects are called through slot 3. */
#ifndef SHARD_W4_MATCH1B_ENTRYTABLE_H
#define SHARD_W4_MATCH1B_ENTRYTABLE_H

#include "common.h"

/* An object with a vtable; only slot 3 (offset 0xc) is called by the table's users. */
class EntryObject {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual u32 slot3();
};

typedef struct EntryTableEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ EntryObject *object;
    /* 0x0C */ u8 unk0c[0x20];
} EntryTableEntry; /* 0x2C */

typedef struct EntryTable {
    /* 0x00 */ EntryTableEntry *entries;
    /* 0x04 */ u32 count;
} EntryTable;

/* The entry at `index`, NULL when the table is empty or the index is out of range. */
static __inline EntryTableEntry *entryTableGet(EntryTable *table, u32 index)
{
    if (table->entries != NULL && index < table->count) {
        return &table->entries[index];
    }
    return NULL;
}

#endif
