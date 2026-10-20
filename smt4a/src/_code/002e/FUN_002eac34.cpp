#include "common.h"

extern "C" {

void slotSetGet(u8 *object, u32 value);
u32 FUN_00310024(u8 *object);
extern u8 DAT_0062e6d0[];

/* Runs slotSetGet on element `index` (0x1C0 bytes each) of the table at 0x62E6D0 with FUN_00310024's result for it. */
void FUN_002eac34(s32 index)
{
    u32 value;

    value = FUN_00310024(DAT_0062e6d0 + index * 0x1C0);
    slotSetGet(DAT_0062e6d0 + index * 0x1C0, value);
}

} /* extern "C" */
