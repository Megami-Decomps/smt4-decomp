/* NON_MATCHING: switch becomes comparisons rather than a jump table; opening-frame load grouping and saved registers differ, 110 vs 111 instructions. */
#include "ui/MaskedChoiceRows.h"

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
    case 0:
        view->openingFrames[0] += 1.0f;
        if (view->openingFrames[0] >= 2.0f)
            view->phase = 1;
        break;
    case 1: {
        view->openingFrames[2] += 1.0f;
        view->openingFrames[0] += 1.0f;
        view->openingFrames[1] += 1.0f;
        s32 completed = 0;
        if (view->openingFrames[0] >= 4.0f) {
            completed = 1;
            view->openingFrames[0] = 4.0f;
        }
        if (view->openingFrames[1] >= 4.0f) {
            ++completed;
            view->openingFrames[1] = 4.0f;
        }
        if (view->openingFrames[2] >= 8.0f) {
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
            if (row->count != 0 && row->count != 1) {
                row->frame += 1.0f;
                if (row->active) {
                    if (row->frame >= 20.0f) {
                        row->frame = 0.0f;
                        row->active = 0;
                    }
                } else if (row->frame >= 4.0f) {
                    ++row->selection;
                    row->selection %= row->count;
                    row->frame = 0.0f;
                    row->active = 1;
                }
            }
        }
        break;
    case 3:
        view->closingFrame += 1.0f;
        if (view->closingFrame >= 4.0f) {
            view->closingFrame = 4.0f;
            view->phase = 4;
        }
        break;
    }
}
