#include "common.h"

extern "C" {

typedef struct GroupItemEntry {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 offset;     /* 0xFFFFFFFF = not stored in the group */
} GroupItemEntry;

typedef struct GroupItemTableEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 offset;     /* from the start of the table to the GroupItemEntry */
} GroupItemTableEntry;

typedef struct GroupItemTable {
    /* 0x00 */ u32 count;
    /* 0x04 */ GroupItemTableEntry entries[1];
} GroupItemTable;

typedef struct GroupFileReader {
    /* 0x00 */ GroupItemTable *table;
    /* 0x04 */ u8 *data;       /* base of the item data */
} GroupFileReader;

typedef struct GroupItemLocationInfo {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ u8 *address;
} GroupItemLocationInfo;

/* Fills `out` with the file id and data address of group item `index`; returns false if the item does not exist. */
bool nw_snd_internal_GroupFileReader_ReadGroupItemLocationInfo(GroupFileReader *reader, GroupItemLocationInfo *out, u32 index)
{
    GroupItemTable *table = reader->table;
    GroupItemEntry *item;

    if (table != NULL && index < table->count) {
        item = (GroupItemEntry *)((u8 *)table + table->entries[index].offset);
        if (item != NULL) {
            out->fileId = item->fileId;
            u8 *base = reader->data;
            u32 offset = item->offset;
            out->address = (offset == 0xFFFFFFFF) ? NULL : base + offset;
            return true;
        }
    }
    return false;
}

} /* extern "C" */
