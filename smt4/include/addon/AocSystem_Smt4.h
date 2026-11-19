#pragma once
#include "common.h"

/* AocSystem (declarations migrated from callers). */
struct ContentRecord;
struct ContentRecordKey;
struct Obj;
extern "C" {

ContentRecord* aocContentGetIndexedRecord(const ContentRecordKey* key, u32 index);

void aocEntryBlockStore(Obj *obj, u32 b, u32 a, int flag, u32 c);

} /* extern "C" */
