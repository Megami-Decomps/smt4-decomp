/* NON_MATCHING: track scan is unrolled, template/count values reload inside the effect loop, and multiply uses MLA rather than SMLABB. */
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
extern s32 g_keyedRecordCount;
extern KeyedRecordStorage g_keyedRecords[];
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

// Find the latest track or repeated effect endpoint in a keyed effect timeline.
u32 FUN_00389b58(s32 index)
{
    if (g_keyedRecordCount - index - 1 < 0)
        return 0;
    const KeyedRecordStorage *storage = &g_keyedRecords[index];
    u32 maximum = 0;
    for (s32 track = 0; track < 5; ++track) {
        if (maximum < storage->timing.tracks[track].frames)
            maximum = storage->timing.tracks[track].frames;
    }
    if (maximum < storage->timing.lastFrame)
        maximum = storage->timing.lastFrame;
    const EffectTimelineEntry *timeline = storage->timeline;
    for (s32 entry = 0; entry < storage->timing.count; ++entry) {
        EffectTimelineRecord record;
        __aeabi_memcpy4(&record, &storage->timing.templates[timeline[entry].recordIndex], sizeof(record));
        s16 repetitions = timeline[entry].repetitions;
        if (repetitions < 1)
            repetitions = 1;
        s16 duration = 0;
        if (record.kind == 0)
            duration = record.firstDuration;
        else if (record.kind == 1 || record.kind == 2 || record.kind == 3)
            duration = record.secondDuration;
        s32 endFrame = repetitions * duration + timeline[entry].startFrame;
        if ((s32)maximum < endFrame)
            maximum = endFrame;
    }
    return maximum;
}
}
