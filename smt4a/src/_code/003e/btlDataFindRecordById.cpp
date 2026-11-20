#include "common.h"
#include "battle/BtlDataIdRecord.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"

struct RecordOwner {
    u8 unk0000[0x2284];
    u32 file;      // 0x2284
};

extern "C" {


// Find the record with the given id in the owner's data table (NULL when absent).
BtlDataIdRecord *btlDataFindRecordById(RecordOwner *owner, u32 id)
{
    if (owner->file == 0) {
        return NULL;
    }
    void *table = dataTableFileGetTable(owner->file, 0);
    BtlDataIdRecord *entries = (BtlDataIdRecord *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    s32 i = 0;
    while (i < count) {
        BtlDataIdRecord *record = &entries[i];
        if (record->id == id) {
            return record;
        }
        i++;
    }
    return NULL;
}

} /* extern "C" */
