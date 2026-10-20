#include "shard/Shard003A.h"

extern "C" {

extern PanelRef DAT_0057f588;
extern void FUN_001846d0(u8 *block, s32 value);
extern u32 FUN_003d2158(u32 handle, u32 value);

/* Script command: resets the panel to state 4, releasing the object at +0x18C. */
u32 scrCommResetPanel(void)
{
    Panel85 *panel = DAT_0057f588.panel;

    FUN_001846d0(panel->blockB00, 2);
    panel->unk17C = 4;
    if (panel->unk18C != 0) {
        FUN_003d2158(panel->unk18C, 0);
        panel->unk18C = 0;
    }
    return 1;
}

} /* extern "C" */
