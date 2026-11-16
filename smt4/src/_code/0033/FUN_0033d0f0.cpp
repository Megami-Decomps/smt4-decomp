/* NON_MATCHING: ported smt4a cyclingPanelAdvance; phase 1 pairs the secondary/reveal frames into vldmia/vstmia where retail pairs opening/secondary (and keeps 4.0f in s2, not s3). */
#include "ui/MaskedChoiceRows.h"

// The animation tail follows the shared row-list prefix.
struct CyclingPanelWork {
    /* 0x000 */ MaskedChoiceRows choices;
    /* 0x300 */ u8 unk300[0x90];
    /* 0x390 */ u32 phase;
    /* 0x394 */ f32 closing;
    /* 0x398 */ f32 opening;
    /* 0x39C */ f32 secondary;
    /* 0x3A0 */ f32 reveal;
};
typedef char CyclingPanelWorkOffsets[offsetof(CyclingPanelWork, phase) == 0x390 && offsetof(CyclingPanelWork, reveal) == 0x3A0 ? 1 : -1];

static __inline s32 panelFrameBits(f32 frame)
{
    return reinterpret_cast<const s32 &>(frame);
}

// Advance the panel reveal/close phases and cycle rows that have multiple choices.
extern "C" void FUN_0033d0f0(CyclingPanelWork *work)
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
        f32 secondary = work->secondary + 1.0f;
        f32 opening = work->opening + 1.0f;
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
        for (s32 index = 0; index < work->choices.count; ++index) {
            MaskedChoiceRow *row = &work->choices.rows[index];
            if (row->count == 0 || row->count == 1)
                continue;
            f32 frame = row->frame + 1.0f;
            row->frame = frame;
            if (row->active) {
                if (panelFrameBits(frame) >= 0x41a00000) {
                    row->frame = 0.0f;
                    row->active = 0;
                }
            } else if (panelFrameBits(frame) >= 0x40800000) {
                ++row->selection;
                row->selection %= row->count;
                row->frame = 0.0f;
                row->active = 1;
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
    case 4:
        break;
    }
}
