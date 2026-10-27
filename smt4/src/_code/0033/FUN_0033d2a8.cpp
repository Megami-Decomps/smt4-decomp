/* NON_MATCHING: definition copies become a pointer/countdown loop; bit-list and group-maximum scratch registers differ. */
#include "ui/MaskedChoiceRows.h"

// Initialize up to nine selectable rows, expanding their masks and measuring each display group.
extern "C" void FUN_0033d2a8(MaskedChoiceRows *work, const MaskedChoiceDefinition *definitions, u32 count)
{
    work->count = count;
    if (count > 9) {
        work->count = 9;
    }
    for (s32 index = 0; work->count > index; ++index) {
        work->rows[index].definition = definitions[index];
    }
    work->firstGroupCount = -1;
    work->otherGroupCount = -1;
    for (s32 index = 0; index < work->count; ++index) {
        MaskedChoiceRow *row = &work->rows[index];
        row->frame = 0.0f;
        row->active = 1;
        row->count = 0;
        row->selection = 0;
        for (s32 bit = 0; bit < 11; ++bit) {
            if ((row->definition.mask & (1 << bit)) != 0) {
                row->choices[row->count] = bit;
                ++row->count;
            }
        }
        if (row->definition.enabled != 0) {
            if (row->definition.group == 1) {
                work->firstGroupCount = work->firstGroupCount > row->definition.index ?
                    work->firstGroupCount : row->definition.index;
            } else {
                work->otherGroupCount = work->otherGroupCount <= row->definition.index ?
                    row->definition.index : work->otherGroupCount;
            }
        }
    }
    ++work->firstGroupCount;
    ++work->otherGroupCount;
}
