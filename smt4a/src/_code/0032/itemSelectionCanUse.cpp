#include "common.h"

struct ItemSelection {
    u8 unk0000[0x331c];
    s32 ids[7]; // 0x331c
    s32 parameters[7]; // 0x3338
};

extern "C" {
s32 FUN_0047fc38(s32 parameter);

// Exclude the four special item ids, then check the selected item's parameter.
s32 itemSelectionCanUse(ItemSelection *selection, s32 index)
{
    s32 id = selection->ids[index];
    if (id != 0x3d && id != 0xb5 && id != 0x30d && id != 0x295) {
        if (FUN_0047fc38(selection->parameters[index]) == 0) {
            return 1;
        }
    }
    return 0;
}
}
