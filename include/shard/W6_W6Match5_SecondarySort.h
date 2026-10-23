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
            /* 0x07 */ u8 flags;
        } classification;
        struct {
            u8 prefix[0xE8];
            /* 0xE8 */ u8 encoded[1]; /* start of the null-terminated encoded text */
        } description;
    };
    u32 sortKey; // 0x150
};
typedef char SecondarySortRecordClassificationCheck[
    offsetof(SecondarySortRecord, classification.order) == 4 &&
    offsetof(SecondarySortRecord, classification.kind) == 6 &&
    offsetof(SecondarySortRecord, classification.flags) == 7 &&
    sizeof(SecondarySortRecord) == 0x154 ? 1 : -1];
typedef char SecondarySortRecordDescriptionOffsetCheck[
    offsetof(SecondarySortRecord, description.encoded) == 0xE8 &&
    sizeof(SecondarySortRecord) == 0x154 ? 1 : -1];

extern "C" SecondarySortRecord *dataTable1bOr1cGetRecord(u16);

#endif
