/* NON_MATCHING: Column-clearing unroll, selection scan guards and multiple-selection result addressing differ. */
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
    for (u32 column = 0; column < view->count; ++column) {
        view->columns[column].selected = 0;
    }
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
        view->multiple = 1;
        return;
    }
    view->multiple = 0;
}
