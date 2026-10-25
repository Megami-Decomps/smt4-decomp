#include "common.h"
#include "gamedata/DataTable.h"


/* A record of data table 0xB: 0x40 bytes, keyed by the halfword id at 0x20. */
struct CostRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x1E];
};

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 unsignedKeyRecordCompare(const void *left, const void *right);

/* Binary-searches data table 0xB (0x40-byte records keyed by a halfword id at 0x20) for the record with id `id`;
 * NULL when the table is missing. */
void *appCostRecordFindById(u16 id)
{
    CostRecord key;
    void *section = dataTableGet(0xB, 0);

    if (section != NULL) {
        void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);

        key.id = id;
        return libc_bsearch(&key, entries, count, 0x40, unsignedKeyRecordCompare);
    }
    return NULL;
}

} /* extern "C" */
