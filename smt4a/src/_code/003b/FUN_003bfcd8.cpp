/* NON_MATCHING: scheduling only: retail loads the 1.0f scale before the panel stores and keeps the panel in r0 before `return 1`. */
#include "ui/MessageMain.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u32 scrGetArg(u32 index);
u32 *gameGetSlotTable(void);
void FUN_0014e188(u8 *sprite, s32 anim, s32 frame, u8 *source, f32 scale, s32 layer);
void pairSetFirstResetSecond(u8 *pair, s32 first);
void uiSpriteSelectAnim(u8 *sprite, s32 anim);

/* Opens the message panel and starts its sprite; `mode` selects the panel variant. */
static __inline void messagePanelOpen(u8 mode)
{
    MessagePanelA *panel = g_messageMain.panel;
    u32 slot;

    panel->unk8E = 1;
    panel->state = 1;
    slot = *gameGetSlotTable();
    panel->unk7C = slot;
    panel->unk88 = slot;
    panel->unk91 = mode;
    panel->unk92 = 0;
    panel->unk17D = 0;
    panel->unk16D = 0;
    FUN_0014e188(panel->blockB00, 8, -1, panel->block194, 1.0f, 11);
    pairSetFirstResetSecond(panel->blockB00, 0);
    uiSpriteSelectAnim(panel->blockB00, 6);
}

/* Sets the panel's current and target value and marks it ready. */
static __inline void messagePanelSetValue(u32 value)
{
    MessagePanelA *panel = g_messageMain.panel;

    panel->unk93 = 0;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk92 = 1;
    panel->unk8C = 0;
}

/* Script command: opens the message panel in its argument-driven mode. */
u32 FUN_003bfcd8(void)
{
    u32 value = scrGetArg(0);

    messagePanelOpen(0);
    messagePanelSetValue(value);
    return 1;
}

} /* extern "C" */
