#ifndef SHARD_W6_W6MATCH7_KEYEDRECORDSTORAGE_H
#define SHARD_W6_W6MATCH7_KEYEDRECORDSTORAGE_H

#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct KeyedRecordSlotDefaults {
    u8 indices[3];
    u8 unk03[5];
};

struct EffectTimelineRecord {
    /* 0x000 */ u8 unk000[0xFC];
    /* 0x0FC */ u32 firstDuration;
    /* 0x100 */ u8 unk100[0x6C];
    /* 0x16C */ u32 secondDuration;
    /* 0x170 */ u8 unk170[0x1D4];
    /* 0x344 */ u8 kind;
    /* 0x345 */ u8 unk345[3];
};

struct EffectTimelineEntry {
    /* 0x00 */ s32 recordIndex;
    /* 0x04 */ s16 startFrame;
    /* 0x06 */ s16 repetitions;
    /* 0x08 */ u8 unk08[0x0C];
};

struct EffectTrackDuration {
    u32 frames;
    u8 unk04[0x14];
};

struct KeyedRecordStorage {
    /* 0x000 */ u8 flags;
    /* 0x001 */ u8 name[0x1F];
    /* 0x020 */ union {
        u8 unk020[0x9C];
        struct {
            /* 0x020 */ s32 count;
            /* 0x024 */ void *records;
        } effectSave;
        struct {
            /* 0x020 */ u32 templateCount;
            /* 0x024 */ EffectTimelineRecord *templates;
            /* 0x028 */ s32 count;
            /* 0x02C */ u8 unk02C[4];
            /* 0x030 */ EffectTrackDuration tracks[5];
            /* 0x0A8 */ u32 lastFrame;
        } timing;
    };
    /* 0x0BC */ KeyedRecordSlotDefaults slots[16];
    union {
        /* 0x13C */ u8 unk13C[0xC];
        /* 0x13C */ EffectTimelineEntry *timeline;
    };
};

struct EffectSaveRecord {
    /* 0x00 */ u32 words[5];
};

struct KeyedEffectSaveStorage {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02c[0x110];
    /* 0x13C */ EffectSaveRecord *records;
    /* 0x140 */ u8 unk140[8];
};

typedef char EffectSaveRecordSizeCheck[sizeof(EffectSaveRecord) == 0x14 ? 1 : -1];
typedef char KeyedEffectSaveStorageSizeCheck[sizeof(KeyedEffectSaveStorage) == 0x148 ? 1 : -1];

typedef char EffectTimelineLayoutCheck[
    sizeof(EffectTimelineRecord) == 0x348 &&
    offsetof(EffectTimelineRecord, firstDuration) == 0xFC &&
    offsetof(EffectTimelineRecord, secondDuration) == 0x16C &&
    offsetof(EffectTimelineRecord, kind) == 0x344 &&
    sizeof(EffectTimelineEntry) == 0x14 &&
    offsetof(EffectTimelineEntry, startFrame) == 4 &&
    offsetof(EffectTimelineEntry, repetitions) == 6 &&
    sizeof(EffectTrackDuration) == 0x18 &&
    sizeof(KeyedRecordStorage) == 0x148 &&
    offsetof(KeyedRecordStorage, timing.templates) == 0x24 &&
    offsetof(KeyedRecordStorage, timing.count) == 0x28 &&
    offsetof(KeyedRecordStorage, timing.tracks) == 0x30 &&
    offsetof(KeyedRecordStorage, timing.lastFrame) == 0xA8 &&
    offsetof(KeyedRecordStorage, timeline) == 0x13C ? 1 : -1];

#endif
