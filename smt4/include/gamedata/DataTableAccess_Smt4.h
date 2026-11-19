#pragma once
#include "common.h"
#include "gamedata/ConsumableRecord.h"

/* DataTableAccess (declarations migrated from callers). */
struct Record;
struct TableEntry;
struct GauntletAppRecord;
struct DataTable54Record;
extern "C" {

u32 * dataTableFindRecordWord(u32 index);

int dataTable17Sub0GetRecord(u32 unused, u32 index);

TableEntry * dataTable29Sub0GetEntryWithAoc(u32 index);

TableEntry * dataTable29GetEntryWithAoc(u32 index);

GauntletAppRecord *dataTable0BFindById(u32 id);

DataTable54Record * dataTable54FindById(u32 id);

} /* extern "C" */
