#include "common.h"

extern "C" {

/* A type-0x2C table entry: an owner id (-1 ends the table), a kind at 2, a sub-id at 3 and a link at 0x14. */
struct Table2CEntry {
    /* 0x00 */ s8 owner;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 kind;
    /* 0x03 */ s8 subId;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u16 link;
};

s32 dataTable2CType0Count(void);
Table2CEntry *dataTable2CGetEntry(s32 index);
u32 dataTable2CType4GetEntry(u16 index);

/* Finds the kind-2 entry of `owner` with the given sub-id and returns the type-4 entry it links to. */
u32 FUN_00328150(s32 owner, s32 subId)
{
    for (s32 i = 0; i < dataTable2CType0Count(); i++) {
        Table2CEntry *entry = dataTable2CGetEntry(i);
        if (entry->owner == -1) {
            return 0;
        }
        if (entry->owner == owner && entry->kind == 2 && entry->subId == subId) {
            return dataTable2CType4GetEntry(entry->link);
        }
    }
    return 0;
}

} /* extern "C" */
