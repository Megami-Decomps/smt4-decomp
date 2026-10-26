#pragma once
#include "common.h"

/* DataTableAccess (declarations migrated from callers). */
struct Record;
struct TableEntry;
struct Entry00246944;
struct Table0BRecord;
struct DataTable54Record;
extern "C" {

u32 * dataTableFindRecordWord(u32 index);

int dataTable17Sub0GetRecord(u32 unused, u32 index);

Record * dataTable08Sub1GetRecord(u16 id);

TableEntry * dataTable29Sub0GetEntryWithAoc(u32 index);

TableEntry * dataTable29GetEntryWithAoc(u32 index);

Entry00246944 * dataTableFindRecordById(s32 id);

Table0BRecord* dataTable0BFindById(u16 id);

DataTable54Record * dataTable54FindById(u32 id);

} /* extern "C" */
