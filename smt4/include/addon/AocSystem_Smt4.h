#pragma once
#include "common.h"

/* AocSystem (declarations migrated from callers). */
struct ContentRecord;
struct ContentRecordKey;
struct AocEntry;
struct Obj;
extern "C" {

u32 aocIndexValueOrDefault(u32 index);

void aocDisplayQueueFormattedEntry(u32 a, u32 b, u32 c, u32 d);

ContentRecord* aocContentGetIndexedRecord(const ContentRecordKey* key, u32 index);

AocEntry * aocEntryFind(u32 type, u32 id);

void aocEntryBlockStore(Obj *obj, u32 b, u32 a, int flag, u32 c);

} /* extern "C" */
