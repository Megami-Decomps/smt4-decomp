/* NON_MATCHING: phase switch uses comparisons instead of a jump table; reveal VFP registers/stores differ. */
#include "common.h"

struct CyclingPanelEntryA {
    u8 unk00[0x38];
    s32 imageCount;
    s32 image;
    f32 frame;
    u8 holding;
    u8 unk45[0x1b];
};
struct CyclingPanelWorkA {
    CyclingPanelEntryA entries[9];
    s32 count;
    u8 unk364[0xa8];
    u32 phase;
    f32 closing;
    f32 opening;
    f32 secondary;
    f32 reveal;
};
static __inline s32 panelFrameBits(f32 frame)
{
    return reinterpret_cast<const s32 &>(frame);
}

// Advance the panel reveal/close phases and cycle entries that have multiple images.
extern "C" void FUN_003f97a4(CyclingPanelWorkA *work)
{
    switch (work->phase) {
    case 0: {
        f32 frame = work->opening + 1.0f;
        work->opening = frame;
        if (panelFrameBits(frame) >= 0x40000000)
            work->phase = 1;
        break;
    }
    case 1: {
        f32 opening = work->opening + 1.0f;
        f32 secondary = work->secondary + 1.0f;
        f32 reveal = work->reveal + 1.0f;
        work->opening = opening;
        work->secondary = secondary;
        work->reveal = reveal;
        s32 completed = 0;
        if (panelFrameBits(opening) >= 0x40800000) {
            completed = 1;
            work->opening = 4.0f;
        }
        if (panelFrameBits(secondary) >= 0x40800000) {
            ++completed;
            work->secondary = 4.0f;
        }
        if (panelFrameBits(reveal) >= 0x41000000) {
            ++completed;
            work->reveal = 8.0f;
        }
        if (completed == 3)
            work->phase = 2;
        break;
    }
    case 2:
        for (s32 index = 0; index < work->count; ++index) {
            CyclingPanelEntryA *entry = &work->entries[index];
            if (entry->imageCount == 0 || entry->imageCount == 1)
                continue;
            f32 frame = entry->frame + 1.0f;
            entry->frame = frame;
            if (entry->holding) {
                if (panelFrameBits(frame) >= 0x41a00000) {
                    entry->frame = 0.0f;
                    entry->holding = 0;
                }
            } else if (panelFrameBits(frame) >= 0x40800000) {
                ++entry->image;
                entry->image %= entry->imageCount;
                entry->frame = 0.0f;
                entry->holding = 1;
            }
        }
        break;
    case 3: {
        f32 frame = work->closing + 1.0f;
        work->closing = frame;
        if (panelFrameBits(frame) >= 0x40800000) {
            work->closing = 4.0f;
            work->phase = 4;
        }
        break;
    }
    }
}
