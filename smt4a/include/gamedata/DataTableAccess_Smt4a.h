#pragma once
#include "common.h"

/* DataTableAccess (declarations migrated from callers). */
struct Entry18;
struct Entry;
struct Entry10;
struct PairedKeyRecord;
struct TableEntry;
struct TableRequest;

/* Table 0x18, section 0: the keys of the statistics counters used by the shop. */
struct StatisticsTableEntry {
    /* 0x00 */ u8 row;
    /* 0x01 */ u8 bank;
    /* 0x02 */ u16 column;
    /* 0x04 */ u8 unk04[0x90];
};
typedef char StatisticsTableEntrySizeCheck[sizeof(StatisticsTableEntry) == 0x94 ? 1 : -1];

extern "C" {

u32 dataTable04GetCategoryOrder(u32 id);

Entry18 * dataTable2BType1GetEntry(u32 unused, u32 index);

Entry * dataTableGetEntry49(u32 index);

Entry10 * dataTable29GetEntry(u32 index);

const StatisticsTableEntry *dataTable18Sub0GetEntries(void);

PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second);

TableEntry * dataTable2aGetEntryWithAoc(u32 index);

u32* dataTable19FindAddonWord(TableRequest* request, u32 index);

} /* extern "C" */
