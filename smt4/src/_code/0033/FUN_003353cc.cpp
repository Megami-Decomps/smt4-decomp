/* NON_MATCHING: the offset helper reads the field once and the entry is read before the store (matches retail's writeback addressing); retail keeps one zero register for every null target and reuses the entry pointer, this build re-materialises zero and addresses with different registers. */
#include "common.h"

/* Self-relative offsets: a field holding the distance from itself to its target (0 = no target). */
static __inline void *relativeTarget(const s32 *field)
{
    u8 *base = (u8 *)field;
    s32 offset = *field;
    u8 *target = NULL;
    if (offset != 0) {
        target = base + offset;
    }
    return target;
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
        u32 flags = tableEntry(table, i)->flags & ~0x240;
        tableEntry(table, i)->flags = flags;
    }
}

} /* extern "C" */
