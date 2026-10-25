/* NON_MATCHING: instructions and layout match retail; only the register assignment differs (retail keeps the banner pointer in r7 and the style in r6, sprite pointers in r8/r9/sl vs mine). */
#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
s32 scrGetCommandFrame(void);
void FUN_0014e188(void *sprite, u32 table, u32 id, void *source, u32 group, f32 scale);
void uiSpriteSelectAnim(void *sprite, s32 anim);

/* Script command: create the banner's sprites and start its fade-in animation; true while it has not begun. */
u8 FUN_003c55e8(void)
{
    MessagePanelA *panel = g_messageMain.panel;
    if (scrGetCommandFrame() == 0) {
        s32 style = scrGetArg(0);
        MessagePanelA *p = g_messageMain.panel;
        FUN_0014e188(p->spritesCA4[15], 4, 0xabf9, p->block194, 0xb, 1.0f);
        FUN_0014e188(p->spritesCA4[16], 4, 0xac04, p->block194, 0xb, 1.0f);
        FUN_0014e188(p->spritesCA4[17], 4, 0xabff, p->block194, 0xb, 1.0f);
        FUN_0014e188(p->spritesCA4[18], 4, 0xac01, p->block194, 0xb, 1.0f);
        FUN_0014e188(p->spritesCA4[19], 4, 0xac01, p->block194, 0xb, 1.0f);
        FUN_0014e188(p->spritesCA4[20], 4, 0xabfe, p->block194, 0xb, 1.0f);
        p->unk19FC = style;
        p->unk19FB = 1;
        p->unk19FA = 1;
        uiSpriteSelectAnim(p->spritesCA4[17], 0xd);
        uiSpriteSelectAnim(p->spritesCA4[18], 0xe);
        uiSpriteSelectAnim(p->spritesCA4[20], 0x11);
        switch (p->unk19FC) {
        case 0:
            p->unk19F9 = 6;
            break;
        case 1:
            uiSpriteSelectAnim(p->spritesCA4[15], 0x13);
            uiSpriteSelectAnim(p->spritesCA4[16], 0x16);
            uiSpriteSelectAnim(p->spritesCA4[19], 0x19);
            p->unk19F9 = 1;
            break;
        case 2:
            uiSpriteSelectAnim(p->spritesCA4[15], 0x14);
            uiSpriteSelectAnim(p->spritesCA4[16], 0x17);
            uiSpriteSelectAnim(p->spritesCA4[19], 0x1a);
            p->unk19F9 = 1;
            break;
        default:
            uiSpriteSelectAnim(p->spritesCA4[15], 0x15);
            uiSpriteSelectAnim(p->spritesCA4[16], 0x18);
            uiSpriteSelectAnim(p->spritesCA4[19], 0x1b);
            p->unk19F9 = 1;
            break;
        }
    }
    return panel->unk19FA == 0;
}
}
