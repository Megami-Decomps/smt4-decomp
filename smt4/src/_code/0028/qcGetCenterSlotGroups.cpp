#include "common.h"

extern "C" {
extern u8 DAT_004c4404[];
extern u8 DAT_004c45a4[];

u8 *qcGetCenterSlotGroups(s32 index)
{
    if (index == 0) {
        return DAT_004c4404;
    }
    if (index == 1) {
        return DAT_004c45a4;
    }
    return NULL;
}
}
