#ifndef SHARD_W6_W6MATCH5_INDEXED_RECORD_H
#define SHARD_W6_W6MATCH5_INDEXED_RECORD_H

#include "common.h"

struct IndexedRecordBuffer {
    u32 words[0x24];
};
struct IndexedRecordList;
struct IndexedRecordSource {
    u8 unk00[0x0c];
    s32 baseIndex; // 0x0c
    u32 unk10;
    IndexedRecordList *records; // 0x14
};
struct IndexedRecordSelection {
    u8 unk00[0x0c];
    s32 index; // 0x0c
};

#endif
