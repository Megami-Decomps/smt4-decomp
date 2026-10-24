#include "common.h"

struct IdRecord {
    u32 id;       // 0x00
    u8 unk04[0x10];
};

struct RecordOwner {
    u8 unk0000[0x2244];
    u32 file;     // 0x2244
};

extern "C" {

u32 dataTableFileGetTable(u32 file, u32 index);
IdRecord *dataTableGetEntries(void);
s32 dataTableGetCount(u32 table);

// Find the record with the given id in the owner's third data table (NULL when absent).
IdRecord *FUN_003397b8(RecordOwner *owner, u32 id)
{
    if (owner->file == 0) {
        return NULL;
    }
    u32 table = dataTableFileGetTable(owner->file, 2);
    IdRecord *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    s32 i = 0;
    while (i < count) {
        IdRecord *record = &entries[i];
        if (record->id == id) {
            return record;
        }
        i++;
    }
    return NULL;
}

} /* extern "C" */
