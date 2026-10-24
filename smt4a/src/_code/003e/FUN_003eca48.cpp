#include "common.h"

struct IdRecord {
    s16 id;        // 0x00
    u8 unk[54];
};

struct RecordOwner {
    u8 unk0000[0x2294];
    u32 file;      // 0x2294
};

extern "C" {

u32 dataTableFileGetTable(u32 file, u32 index);
IdRecord *dataTableGetEntries(void);
s32 dataTableGetCount(u32 table);

// Find the record with the given id in the owner's data table (NULL when absent).
IdRecord *FUN_003eca48(RecordOwner *owner, s32 id)
{
    if (owner->file == 0) {
        return NULL;
    }
    u32 table = dataTableFileGetTable(owner->file, 0);
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
