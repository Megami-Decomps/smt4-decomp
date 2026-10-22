#include "common.h"

extern "C" {

extern void *DAT_00588130;
void npcShopUpdateState(void *owner, s32 value);

s32 FUN_00349b14(s32 value)
{
    if (DAT_00588130 != NULL) {
        npcShopUpdateState(DAT_00588130, value);
    }
    return 0;
}

} /* extern "C" */
