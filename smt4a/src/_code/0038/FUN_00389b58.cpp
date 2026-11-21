/* NON_MATCHING: the track scan peels its last iteration where retail peels the first, and retail addresses the
 * timeline fields from hoisted offset registers. Retail keeps the five-track scan as a loop of two pairs; the u8
 * index keeps that loop (80 lines), an s32 or u32 index unrolls all five passes (99). */
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
extern s32 g_keyedRecordCount;
extern KeyedRecordStorage g_keyedRecords[];

// Find the latest track or repeated effect endpoint in a keyed effect timeline.
u32 FUN_00389b58(s32 index)
{
    if (g_keyedRecordCount - index - 1 < 0)
        return 0;
    const KeyedRecordStorage *storage = &g_keyedRecords[index];
    u32 maximum = 0;
    for (u8 track = 0; track < 5; ++track) {
        if (maximum < storage->timing.tracks[track].frames)
            maximum = storage->timing.tracks[track].frames;
    }
    if (maximum < storage->timing.lastFrame)
        maximum = storage->timing.lastFrame;
    const EffectTimelineEntry *timeline = storage->timeline;
    for (s32 entry = 0; entry < storage->timing.count; ++entry) {
        EffectTimelineRecord record = storage->timing.templates[timeline[entry].recordIndex];
        s16 repetitions = timeline[entry].repetitions;
        repetitions = repetitions < 1 ? 1 : repetitions;
        s16 duration = 0;
        if (record.kind == 0)
            duration = record.firstDuration;
        else if (record.kind == 1 || record.kind == 2 || record.kind == 3)
            duration = record.secondDuration;
        s32 endFrame = repetitions * duration + timeline[entry].startFrame;
        if (endFrame > (s32)maximum)
            maximum = endFrame;
    }
    return maximum;
}
}
