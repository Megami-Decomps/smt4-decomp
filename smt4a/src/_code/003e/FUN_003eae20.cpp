#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_VariantA.h"

extern "C" {

/* A 0x9c-byte record keyed by two halfwords. */
typedef struct KeyPairRecord {
    /* 0x00 */ s16 first;
    /* 0x02 */ u16 second;
    /* 0x04 */ u8 unk04[0x98];
} KeyPairRecord;

/* The owner of a data table file handle at +0x227C. */
typedef struct TableFileOwner {
    /* 0x0000 */ u8 unk0000[0x227C];
    /* 0x227C */ u32 tableFile;
} TableFileOwner;

/* Finds the record of the owner's table file (table 1) whose key pair is (first, second); NULL when absent. */
KeyPairRecord *FUN_003eae20(TableFileOwner *owner, s32 first, u32 second)
{
    if (owner->tableFile == 0) {
        return NULL;
    }
    void *table = dataTableFileGetTable(owner->tableFile, 1);
    KeyPairRecord *entries = static_cast<KeyPairRecord *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);

    for (s32 i = 0; i < count; i++) {
        KeyPairRecord *entry = &entries[i];
        if (entry->first == first && entry->second == second) {
            return entry;
        }
    }
    return NULL;
}

}
