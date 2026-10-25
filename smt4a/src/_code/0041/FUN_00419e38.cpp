/* NON_MATCHING: only the first of the three inlined record resets differs (retail computes block = record+16 separately instead of using the writeback form); the others match. */
#include "common.h"

namespace {
// One of the twelve per-slot trackers of an effect record.
struct SlotTracker {
    u8 enabled;             // 0x00
    u8 unk01[3];
    f32 values[4];          // 0x04
};

// The resettable part of a record: a state word, a cleared block and twelve parts and trackers.
struct EffectBlock {
    u32 state;              // 0x00
    u8 cleared[0x150];      // 0x04
    u8 partFlags[12];       // 0x154
    u8 parts[12][0x70];     // 0x160
    SlotTracker trackers[12]; // 0x6A0
};

// A heap record: two buffers and the resettable block.
struct EffectRecord {
    u8 unk00[8];
    void *bufferA;          // 0x08
    void *bufferB;          // 0x0C
    EffectBlock block;      // 0x10
};

// Three parallel record lists.
struct EffectRecordSets {
    u8 unk00[4];
    EffectRecord **listB;   // 0x04
    EffectRecord **listA;   // 0x08
    EffectRecord **listC;   // 0x0C
    s32 count;              // 0x10
};
}

extern "C" {
void asdMemFree(void *block);
void *sysMemClear(void *memory, u32 size);
void FUN_0042cb74(void *part);

static void effectRecordReset(EffectRecord *record)
{
    EffectBlock *block = &record->block;
    block->state = 0;
    sysMemClear(block->cleared, sizeof(block->cleared));
    for (u32 i = 0; i < 12; i++) {
        block->partFlags[i] = 0;
        FUN_0042cb74(block->parts[i]);
        SlotTracker *tracker = &block->trackers[i];
        tracker->enabled = 0;
        tracker->values[0] = 0.0f;
        tracker->values[1] = 0.0f;
        tracker->values[2] = 0.0f;
        tracker->values[3] = 0.0f;
    }
    asdMemFree(record->bufferA);
    asdMemFree(record->bufferB);
}

/* Reset and free every record of the three lists, then the lists themselves. */
void FUN_00419e38(EffectRecordSets *sets)
{
    for (s32 i = 0; i < sets->count; i++) {
        if (sets->listA[i] != NULL) {
            effectRecordReset(sets->listA[i]);
        }
        if (sets->listB[i] != NULL) {
            effectRecordReset(sets->listB[i]);
        }
        if (sets->listC[i] != NULL) {
            effectRecordReset(sets->listC[i]);
        }
        if (sets->listA[i] != NULL) {
            asdMemFree(sets->listA[i]);
            sets->listA[i] = NULL;
        }
        if (sets->listB[i] != NULL) {
            asdMemFree(sets->listB[i]);
            sets->listB[i] = NULL;
        }
        if (sets->listC[i] != NULL) {
            asdMemFree(sets->listC[i]);
            sets->listC[i] = NULL;
        }
    }
    sets->count = 0;
    if (sets->listA != NULL) {
        asdMemFree(sets->listA);
        sets->listA = NULL;
    }
    if (sets->listB != NULL) {
        asdMemFree(sets->listB);
        sets->listB = NULL;
    }
    if (sets->listC != NULL) {
        asdMemFree(sets->listC);
        sets->listC = NULL;
    }
}
}
