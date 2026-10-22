#ifndef SHARD_W6_W6MATCH5_SECONDARYSORT_H
#define SHARD_W6_W6MATCH5_SECONDARYSORT_H

#include "common.h"
#include <stddef.h>

struct SecondarySortRecord {
    union {
        u8 unk000[0x150];
        struct {
            /* 0x00 */ u8 unk00[4];
            /* 0x04 */ u16 order;
            /* 0x06 */ u8 kind;
        } classification;
    };
    u32 sortKey; // 0x150
};
typedef char SecondarySortRecordClassificationCheck[
    offsetof(SecondarySortRecord, classification.order) == 4 &&
    offsetof(SecondarySortRecord, classification.kind) == 6 &&
    sizeof(SecondarySortRecord) == 0x154 ? 1 : -1];

extern "C" SecondarySortRecord *dataTable1bOr1cGetRecord(u16);

#endif
