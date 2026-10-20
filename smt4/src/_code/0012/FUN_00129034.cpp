/* NON_MATCHING: the table-offset load lands in r2 where retail uses ip (then adds into r2). */
#include "common.h"

extern "C" {

/* Sub-record embedded in an entry at +0x14; its word at +4 is an offset into the data area. */
typedef struct {
    u8 unk00[4];
    s32 dataOffset;     /* 0x04 */
} SubRecord;

typedef struct {
    u8 unk00[0x14];
    SubRecord sub;      /* 0x14 */
} Entry;

/* Table: entry count at 0x14, then (unused word, offset) pairs from 0x1c. */
typedef struct {
    u8 unk00[0x14];
    u32 count;          /* 0x14 */
    u8 unk18[4];
    struct {
        s32 offset;     /* 0x1c: entry offset from the table */
        s32 unk04;
    } entries[1];
} Table;

/* Packed resource: offsets at 0x18 (table) and 0x24 (data) are relative to +8. */
typedef struct {
    u8 unk00[0x18];
    s32 tableOffset;    /* 0x18 */
    u8 unk1c[8];
    s32 dataOffset;     /* 0x24 */
} Resource;

/* Resolves entry `index` to a pointer inside the resource's data area; 0 when the index or entry is invalid. */
u8 *FUN_00129034(Resource *resource, int index)
{
    u8 *base = (u8 *)resource + 8;
    Table *table = (Table *)(resource->tableOffset + base);

    if (index >= 0 && (u32)index < table->count) {
        Entry *entry = (Entry *)((u8 *)table + table->entries[index].offset);
        SubRecord *sub = &entry->sub;

        if (sub != NULL) {
            u8 *data = resource->dataOffset + base;

            return data + sub->dataOffset;
        }
    }
    return NULL;
}

} /* extern "C" */
