/* Looks `name` up in a name table and stores the matching entry's value in *outValue.
 * Returns 1 if found, else 0. */
#include "common.h"

extern "C" {

extern s32 FUN_0019a37c(const char *a, const char *b, u32 len);
extern u32 wstrlen(const char *s);

struct NameEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ char name[1];
};

/* A name table: `count` index records, each locating an entry by its offset from the table start. */
struct NameTableRecord {
    /* 0x00 */ u32 offset;
    /* 0x04 */ u32 unk04;
};

struct NameTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ NameTableRecord records[1];
};

static __inline NameEntry *nameTableGet(NameTable *table, u32 index)
{
    if (index >= (u32)table->count) {
        return NULL;
    }
    return (NameEntry *)((u8 *)table + table->records[index].offset);
}

s32 FUN_0050885c(NameTable *table, const char *name, u32 *outValue)
{
    u32 len = wstrlen(name);
    s32 i;

    for (i = 0; i < table->count; i++) {
        NameEntry *entry = nameTableGet(table, i);

        if (FUN_0019a37c(name, entry->name, len) == 0) {
            *outValue = entry->value;
            return 1;
        }
    }
    return 0;
}

}
