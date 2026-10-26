#pragma once
#include "common.h"

/* DataTableAccess (declarations migrated from callers). */
struct Entry18;
struct Entry;
struct Entry10;
struct PairedKeyRecord;
struct TableEntry;
struct TableRequest;
extern "C" {

u32 dataTable04GetCategoryOrder(u32 id);

Entry18 * dataTable2BType1GetEntry(u32 unused, u32 index);

Entry * dataTableGetEntry49(u32 index);

Entry10 * dataTable29GetEntry(u32 index);

int dataTable18Sub0GetEntries(void);

PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second);

TableEntry * dataTable2aGetEntryWithAoc(u32 index);

u32* dataTable19FindAddonWord(TableRequest* request, u32 index);

} /* extern "C" */
