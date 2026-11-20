#include "common.h"
#include "code/Code0020.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 padQueryLogicalKey(s32 category, s32 index);
s32 slotIsActive(u32 flag);

u32 inputFastForwardActive(void)
{
    if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
        return 1;
    }
    return 0;
}
}
