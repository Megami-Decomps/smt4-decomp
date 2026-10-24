/* NON_MATCHING: loop unrolling: the build unrolls the linear search by two (with an odd-count peel); retail runs it as a plain loop with the result and index sharing r0. */
#include "common.h"

extern "C" {

/* A 0x9c-byte record keyed by two halfwords. */
typedef struct KeyPairRecord {
    /* 0x00 */ s16 first;
    /* 0x02 */ u16 second;
    /* 0x04 */ u8 unk04[0x98];
} KeyPairRecord;

/* The owner of a data table file handle at +0x2244. */
typedef struct TableFileOwner {
    /* 0x0000 */ u8 unk0000[0x2244];
    /* 0x2244 */ s32 tableFile;
} TableFileOwner;

u32 dataTableFileGetTable(s32 file, u32 table);
s32 dataTableGetCount(u32 table);
KeyPairRecord *dataTableGetEntries(void);

/* Finds the record of the owner's table file (table 1) whose key pair is (first, second); NULL when absent. */
KeyPairRecord *FUN_00337ba0(TableFileOwner *owner, s32 first, u32 second)
{
    if (owner->tableFile == 0) {
        return NULL;
    }
    u32 table = dataTableFileGetTable(owner->tableFile, 1);
    KeyPairRecord *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);

    for (s32 i = 0; i < count; i++) {
        if (entries[i].first == first && entries[i].second == second) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
