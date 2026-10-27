/* NON_MATCHING: ported smt4a cyclingPanelAdvance (integer bit compares of the frame floats); opening-frame loads still not paired into vldmia and registers differ. */
#include "ui/MaskedChoiceRows.h"

static __inline s32 panelFrameBits(f32 frame)
{
    return reinterpret_cast<const s32 &>(frame);
}

extern "C" void FUN_0033d0f0(MaskedChoiceRows *choices)
{
    // The animation tail follows the shared row-list prefix.
    struct ChoiceAnimationView {
        MaskedChoiceRows choices;
        u8 unk300[0x90];
        u32 phase;
        f32 closingFrame;
        f32 openingFrames[3];
    };
    typedef char ChoiceAnimationOffsets[offsetof(ChoiceAnimationView, phase) == 0x390 && offsetof(ChoiceAnimationView, openingFrames) == 0x398 ? 1 : -1];
    ChoiceAnimationView *view = reinterpret_cast<ChoiceAnimationView *>(choices);
    switch (view->phase) {
    case 0: {
        f32 frame = view->openingFrames[0] + 1.0f;
        view->openingFrames[0] = frame;
        if (panelFrameBits(frame) >= 0x40000000)
            view->phase = 1;
        break;
    }
    case 1: {
        f32 secondary = view->openingFrames[1] + 1.0f;
        f32 reveal = view->openingFrames[2] + 1.0f;
        f32 opening = view->openingFrames[0] + 1.0f;
        view->openingFrames[0] = opening;
        view->openingFrames[2] = reveal;
        view->openingFrames[1] = secondary;
        s32 completed = 0;
        if (panelFrameBits(opening) >= 0x40800000) {
            completed = 1;
            view->openingFrames[0] = 4.0f;
        }
        if (panelFrameBits(secondary) >= 0x40800000) {
            ++completed;
            view->openingFrames[1] = 4.0f;
        }
        if (panelFrameBits(reveal) >= 0x41000000) {
            ++completed;
            view->openingFrames[2] = 8.0f;
        }
        if (completed == 3)
            view->phase = 2;
        break;
    }
    case 2:
        for (s32 index = 0; index < choices->count; ++index) {
            MaskedChoiceRow *row = &choices->rows[index];
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
        f32 frame = view->closingFrame + 1.0f;
        view->closingFrame = frame;
        if (panelFrameBits(frame) >= 0x40800000) {
            view->closingFrame = 4.0f;
            view->phase = 4;
        }
        break;
    }
    case 4:
        break;
    }
}
