/* NON_MATCHING: selected-column address formation and unrolled search exits differ. */
#include "battle/btlUI.h"

extern "C" u32 FUN_00300904(const BtlUiObjC *panel)
{
    /* The recovered byte-only column type does not yet describe its word value. */
    struct Column {
        u32 unk00;
        u32 value;
        u8 unk08[8];
        u8 selected;
        u8 unk11[0x1B];
    };
    struct SelectionView {
        u8 prefix[0x5758];
        s32 count;
        u8 unk575C;
        s8 enabled;
        u8 unk575E[0x1A];
        Column columns[1];
    };
    typedef char SelectionLayoutCheck[sizeof(Column) == 0x2C &&
        offsetof(SelectionView, enabled) == 0x575D &&
        offsetof(SelectionView, columns) == 0x5778 ? 1 : -1];
    const SelectionView *selection = reinterpret_cast<const SelectionView *>(panel);
    if (selection->enabled) {
        for (s32 i = 0; i < selection->count; ++i) {
            if (selection->columns[i].selected) {
                return selection->columns[i].value;
            }
        }
    }
    return 0xFFFFFFFF;
}
