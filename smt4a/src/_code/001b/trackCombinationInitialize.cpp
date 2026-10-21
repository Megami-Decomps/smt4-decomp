/* NON_MATCHING: resource countdown loops gain signed-range guards and allocation differs; -O2 candidate. */
#include "common.h"

struct CombinationTrack {
    u8 unk00[6];
    u8 dependent; // 0x06
};
struct CombinationFile {
    u32 unk00;
    u32 trackCount; // 0x04
    u32 trackOffsets[1]; // 0x08
};
struct CombinationValue { u32 value; u32 unk04; };
struct CombinationFileTail {
    u32 unk00[2];
    u32 dataOffset; // 0x08
    u32 dataSize; // 0x0c
    u32 valuesOffset; // 0x10
    u32 valueCount; // 0x14
};
struct CombinationState {
    s32 primary; // 0x00
    s32 secondary; // 0x04
    u32 combinedSize; // 0x08
    u8 trackCount; // 0x0c
    u8 unk0d[3];
    CombinationTrack *tracks[32]; // 0x10
    void *data; // 0x90
    u32 dataSize; // 0x94
    u32 *values; // 0x98
    u32 valueCount; // 0x9c
    u8 mode; // 0xa0
    u8 unka1[3];
    u32 unka4;
    u32 unka8;
    u32 *combinations; // 0xac
    u32 *combinationSizes; // 0xb0
    u8 unkb4[0x10];
    u32 *sizeTable; // 0xc4; entry zero is the size for selection -1
};
extern "C" {
void FUN_001c5da0(CombinationState *, u32);
void FUN_001c6c24(CombinationState *);
void FUN_001c6988(CombinationState *);
void FUN_001c5fa8(CombinationState *, u32 *, u32, s32);

// Resolve resource offsets and build combinations of independent and dependent tracks.
void trackCombinationInitialize(CombinationState *state, const CombinationFile *file, s32 primary, s32 secondary, u32 allocator)
{
    s32 remaining = file->trackCount & 0xff;
    state->trackCount = remaining;
    state->unka4 = 0;
    state->unka8 = 0;
    const u32 *offset = file->trackOffsets;
    u32 track = 0;
    while (remaining != 0) {
        state->tracks[track++] = (CombinationTrack *)((u8 *)file + *offset++);
        --remaining;
    }
    const CombinationFileTail *tail = (const CombinationFileTail *)offset;
    state->data = (u8 *)tail + tail->dataOffset;
    state->dataSize = tail->dataSize;
    state->valueCount = tail->valueCount;
    const CombinationValue *values = (const CombinationValue *)((const u8 *)tail + tail->valuesOffset);
    FUN_001c5da0(state, allocator);
    s32 count = state->valueCount;
    if (count != 0) {
        u32 index = 0;
        do {
            --count;
            state->values[index++] = values->value;
            ++values;
        } while (count != 0);
    }
    u8 previousMode = state->mode;
    FUN_001c6c24(state);
    FUN_001c6988(state);
    state->primary = primary;
    state->secondary = secondary;
    state->combinedSize = state->sizeTable[secondary + 1] + state->sizeTable[primary + 1];
    if (secondary >= 0)
        state->mode = 3;
    u8 combination = 0;
    u32 outputOffset = 0;
    for (u32 first = 0; first < state->trackCount; ++first) {
        if (!state->tracks[first]->dependent) {
            state->secondary = -1;
            FUN_001c5fa8(state, state->combinations + outputOffset, first, -1);
            outputOffset += state->combinationSizes[combination++];
            for (u32 second = 0; second < state->trackCount; ++second) {
                if (state->tracks[second]->dependent) {
                    state->secondary = second;
                    FUN_001c5fa8(state, state->combinations + outputOffset, first, second);
                    outputOffset += state->combinationSizes[combination++];
                }
            }
        }
    }
    state->secondary = secondary;
    if (secondary < 0)
        state->mode = previousMode;
}
}
