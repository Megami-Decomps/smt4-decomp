/* NON_MATCHING: retail walks the record list through one pointer (add r4, list, i*16; ldr r2, [r4, #40]! then adds the offset to the written-back r4) and keeps 0 in r3 for the null cases; this build recomputes the field address and uses more saved registers. */
#include "common.h"

/* Self-relative offsets: a field holding the distance from itself to its target (0 = no target). */
static __inline void *relativeTarget(const s32 *field)
{
    return *field != 0 ? (u8 *)field + *field : NULL;
}

struct ResourceEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

struct ResourceRecord {
    /* 0x00 */ s32 entryOffset;
    /* 0x04 */ u8 unk04[12];
};

/* The record array: records start 0x28 bytes in. */
struct ResourceRecordList {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ ResourceRecord records[1];
};

/* A table whose self-relative offset at 0x1C leads to the record list. */
struct ResourceTable {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 count;
    /* 0x1C */ s32 recordsOffset;
};

struct ResourceHeader {
    /* 0x000 */ u32 signature;
    /* 0x004 */ u8 unk004[0xDC];
    /* 0x0E0 */ s32 tableOffset;
};

struct ResourceHolder {
    /* 0x00 */ u8 unk00[0x08];
    /* 0x08 */ ResourceHeader *header;
};

struct ResourceLink2 {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ResourceHolder *holder;
};

struct ResourceLink1 {
    /* 0x00 */ u8 unk00[0x08];
    /* 0x08 */ ResourceLink2 *next;
};

struct ResourceOwner {
    /* 0x00 */ u8 unk00[0x08];
    /* 0x08 */ ResourceLink1 *link;
};

/* The i-th entry of the table, or NULL when the table has no record list. */
static __inline ResourceEntry *tableEntry(ResourceTable *table, u32 i)
{
    ResourceRecordList *list = (ResourceRecordList *)relativeTarget(&table->recordsOffset);
    ResourceEntry *entry = NULL;
    if (list != NULL) {
        entry = (ResourceEntry *)relativeTarget(&list->records[i].entryOffset);
    }
    return entry;
}

extern "C" {

/* Clears the 0x240 flag bits of every entry in the resource table. */
void FUN_003353cc(ResourceOwner *owner)
{
    ResourceHeader *header = owner->link->next->holder->header;
    if (header != NULL && (~header->signature & 0x40000092) != 0) {
        header = NULL;
    }
    ResourceTable *table = (ResourceTable *)relativeTarget(&header->tableOffset);
    for (u32 i = 0; i < table->count; ++i) {
        tableEntry(table, i)->flags = tableEntry(table, i)->flags & ~0x240;
    }
}

} /* extern "C" */
