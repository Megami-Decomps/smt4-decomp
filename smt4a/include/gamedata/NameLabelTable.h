#ifndef GAMEDATA_NAME_LABEL_TABLE_A_H
#define GAMEDATA_NAME_LABEL_TABLE_A_H

#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

/* A row of data table 0x38, section 0: a signed search key followed by two labels. */
struct NameLabelRecordA {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 token[11];
    /* 0x18 */ char mapName[0x50];
};

typedef char NameLabelRecordALayoutCheck[sizeof(NameLabelRecordA) == 0x68 &&
    offsetof(NameLabelRecordA, token) == 2 && offsetof(NameLabelRecordA, mapName) == 0x18 ? 1 : -1];

extern "C" s32 arrayCompareSignedHalfword(const void *left, const void *right);

/* Match an ID in the table sorted by dataTableRefAcquire. */
static __inline NameLabelRecordA *nameLabelTableFindA(u32 id)
{
    void *table = dataTableGet(0x38, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    NameLabelRecordA key;
    key.id = static_cast<s16>(id);
    return static_cast<NameLabelRecordA *>(
        libc_bsearch(&key, entries, count, sizeof(NameLabelRecordA), arrayCompareSignedHalfword));
}

#endif
