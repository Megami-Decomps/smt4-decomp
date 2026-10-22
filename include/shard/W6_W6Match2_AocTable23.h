#ifndef SHARD_W6_W6MATCH2_AOC_TABLE23_H
#define SHARD_W6_W6MATCH2_AOC_TABLE23_H

#include "common.h"
#include <stddef.h>

struct Table23Record {
    union {
        u8 data[0x0c];
        struct {
            s8 category;
            s8 subtype;
            u8 variant;
        } key;
    };
};

// The common extension tail lies beyond both canonical AocSystem prefixes.
struct AocTable23View {
    u8 unk000[0x3ec];    // 0x000
    u32 count;           // 0x3ec
    Table23Record* entries; // 0x3f0
};

struct Table23TriggerPair {
    u8 group;
    u8 id;
};
struct Table23TriggerRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s8 kind;
    /* 0x09 */ u8 unk09[2];
    /* 0x0B */ Table23TriggerPair triggers[3];
    /* 0x11 */ u8 unk11[0x0F];
};
typedef char Table23TriggerRecordSizeCheck[sizeof(Table23TriggerRecord) == 0x20 ? 1 : -1];

typedef char Table23RecordKeyOffsetsCheck[
    offsetof(Table23Record, key.category) == 0 &&
    offsetof(Table23Record, key.subtype) == 1 &&
    offsetof(Table23Record, key.variant) == 2 && sizeof(Table23Record) == 0xC ? 1 : -1];

#endif
