#ifndef SHARD_W6_W6MATCH5_NAMEDLOOKUP_H
#define SHARD_W6_W6MATCH5_NAMEDLOOKUP_H

#include "common.h"

union NamedRecordName {
    char text[12];
    u32 words[3];
};

struct NamedSortRecord {
    NamedRecordName name; // 0x00
    s16 key;              // 0x0c
    u16 index;            // 0x0e; original index retained when sorting.
};

extern "C" s32 keyedRecordCompareName(const NamedSortRecord *left, const NamedSortRecord *right);

#endif
