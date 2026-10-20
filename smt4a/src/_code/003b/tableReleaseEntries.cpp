#include "common.h"

extern "C" {

/* 16-byte entry; the first word is the id handed to FUN_002ce8d8. */
typedef struct {
    u32 id;
    u32 unk04[3];
} Entry;

/* Entry table: pointer to the first entry at offset 0. */
typedef struct {
    Entry *entries;     /* 0x00 */
} Table;

/* Count source: the number of entries lives at 0x38. */
typedef struct {
    u8 unk00[0x38];
    u32 count;          /* 0x38 */
} Counter;

/* Table and its count source, adjacent in the owner. */
typedef struct {
    Table *table;       /* 0x00 */
    Counter *counter;   /* 0x04 */
} TableRef;

typedef struct {
    u8 unk00[0x30];
    TableRef ref;       /* 0x30 */
} Owner;

int FUN_002ce8d8(u32 id);
int asdMemFree(Table *table);

/* Runs FUN_002ce8d8 on every entry of the owner's table, then releases the table. */
void tableReleaseEntries(Owner *owner)
{
    TableRef *ref = &owner->ref;
    Table *table = ref->table;
    Counter *counter = ref->counter;
    Entry *entry = table->entries;
    u32 count = counter->count;
    u32 i;

    for (i = 0; i < count; i++) {
        FUN_002ce8d8(entry->id);
        entry++;
    }
    asdMemFree(table);
}

} /* extern "C" */
