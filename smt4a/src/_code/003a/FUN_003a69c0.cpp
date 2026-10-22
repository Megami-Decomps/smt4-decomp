/* NON_MATCHING: panel initialization constants and register allocation differ. */
#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
u32 scrGetArg(u32);
const u32 *gameGetSlotTable(void);
void FUN_0014e188(void *, s32, s32, void *, s32, f32);
void pairSetFirstResetSecond(void *, s32);
void uiSpriteSelectAnim(void *, s32);

// Prepare the message panel animation and store the requested display value.
u32 FUN_003a69c0(void)
{
    u32 value = scrGetArg(0);
    MessagePanelA *panel = g_messageMain.panel;
    panel->unk8E = 1;
    panel->state = 1;
    u32 slot = *gameGetSlotTable();
    panel->unk7C = slot;
    panel->unk88 = slot;
    panel->unk91 = 0;
    panel->unk92 = 0;
    panel->unk17D = 0;
    panel->unk16D = 0;
    FUN_0014e188(panel->blockB00, 8, -1, panel->block194, 11, 1.0f);
    pairSetFirstResetSecond(panel->blockB00, 0);
    uiSpriteSelectAnim(panel->blockB00, 6);
    panel = g_messageMain.panel;
    panel->unk93 = 0;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk92 = 1;
    panel->unk8C = 0;
    return 1;
}
}
