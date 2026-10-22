/* NON_MATCHING: the final unk19FA read builds the address with two adds instead of reusing the 0x19FA pool literal. */
#include "common.h"
#include "ui/MessageMain.h"

extern "C" {

void uiSpriteSelectAnim(u8 *sprite, s32 animation);
s32 scrGetCommandFrame(void);

extern MessageGlobalsA g_messageMain;

/* Switches the panel's sprites to their closing animations and picks the next state. */
static __inline void messagePanelStartClose(void)
{
    MessagePanelA *panel = g_messageMain.panel;

    uiSpriteSelectAnim(panel->spritesCA4[17], 15);
    uiSpriteSelectAnim(panel->spritesCA4[18], 16);
    uiSpriteSelectAnim(panel->spritesCA4[20], 18);
    panel->unk19FA = 1;
    panel->unk19F9 = panel->unk19FC == 0 ? 6 : 4;
}

/* Starts closing the message panel once the script command is done and a close is pending;
 * returns whether the panel is still open. */
bool FUN_003c87b4(void)
{
    MessagePanelA *panel = g_messageMain.panel;

    if (scrGetCommandFrame() == 0 && panel->unk19FB != 0) {
        messagePanelStartClose();
    }
    return panel->unk19FA == 0;
}

} /* extern "C" */
