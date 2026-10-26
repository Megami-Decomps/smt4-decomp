/* NON_MATCHING: signed counters and the early result pointer match; retail hoists the constant 1 into fp (used by both the column and the flag stores) where the build hoists 0. */
#include "battle/btlUI.h"

/* The shared column prefix has byte alignment; use a local aligned view for its id word. */
struct BtlUiSelectableColumn {
    u8 value;
    u8 unk01[3];
    s32 id;
    u8 unk08[8];
    u8 selected;
    u8 unk11[0x1B];
};
struct BtlUiColumnSelectionView {
    u8 unk0000[0x5758];
    s32 count;
    u8 multiple;
    u8 unk575D[0x1B];
    BtlUiSelectableColumn columns[1];
};
typedef char BtlUiSelectionColumnSizeCheck[sizeof(BtlUiSelectableColumn) == 0x2C ? 1 : -1];

extern "C" u64 runtimeShiftLeftWide(u64 value, s32 shift);

/* Marks all columns whose ids occur in mask and records whether more than one column matched. */
extern "C" void FUN_003009fc(BtlUiObjC *object, u64 mask)
{
    BtlUiColumnSelectionView *view = (BtlUiColumnSelectionView *)object;
    for (s32 column = 0; column < view->count; ++column) {
        view->columns[column].selected = 0;
    }
    u8 *multiple = &view->multiple;
    s32 matches = 0;
    for (s32 id = 0; id < view->count; ++id) {
        if (runtimeShiftLeftWide(1, id) & mask) {
            for (s32 column = 0; column < view->count; ++column) {
                if (view->columns[column].id == id) {
                    ++matches;
                    view->columns[column].selected = 1;
                }
            }
        }
    }
    if (matches > 1) {
        *multiple = 1;
        return;
    }
    *multiple = 0;
}
