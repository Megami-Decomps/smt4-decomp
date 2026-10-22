#ifndef UTIL_INDEXEDRANGERESET_H
#define UTIL_INDEXEDRANGERESET_H
#include "common.h"
#include <stddef.h>

struct IndexedRangeObject {
    u8 unk00[0xC];
    u32 firstPosition;
    u32 secondPosition;
    u32 unk14;
    u32 firstBegin;
    u32 firstEnd;
    u8 unk20[0x24];
    u32 secondBegin;
    u32 secondEnd;
};
struct IndexedRangeEntry {
    s32 id;
    IndexedRangeObject *object;
    u32 value;
};
struct IndexedRangePair { u32 first; u32 second; };
struct IndexedRangeResetState {
    u8 unk00[0x10];
    IndexedRangeEntry *entriesBegin;
    IndexedRangeEntry *entriesEnd;
    u8 unk18[8];
    IndexedRangePair *firstBegin;
    IndexedRangePair *firstEnd;
    u8 unk28[8];
    IndexedRangePair *secondBegin;
    IndexedRangePair *secondEnd;
};
typedef char IndexedRangeResetLayoutCheck[
    sizeof(IndexedRangeEntry) == 12 && sizeof(IndexedRangePair) == 8 &&
    offsetof(IndexedRangeObject, firstBegin) == 0x18 &&
    offsetof(IndexedRangeObject, secondBegin) == 0x44 &&
    offsetof(IndexedRangeResetState, entriesBegin) == 0x10 &&
    offsetof(IndexedRangeResetState, firstBegin) == 0x20 &&
    offsetof(IndexedRangeResetState, secondBegin) == 0x30 ? 1 : -1];
#endif
