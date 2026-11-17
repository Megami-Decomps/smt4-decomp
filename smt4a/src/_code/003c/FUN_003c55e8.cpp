/* NON_MATCHING: instructions and layout match retail; only the register assignment differs (retail keeps the banner pointer in r7 and the style in r6, sprite pointers in r8/r9/sl vs mine). */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "script/ScriptArgs.h"
#include "ui/UiControl.h"

extern "C" {

/* Script command: create the banner's sprites and start its fade-in animation; true while it has not begun. */
u8 FUN_003c55e8(void)
{
    MessageWindowA *panel = g_messageMain.banner;
    if (scrGetCommandFrame() == 0) {
        s32 style = scrGetArg(0);
        MessageWindowA *p = g_messageMain.banner;
        uiSpriteStateInitFromSource(&p->sprites[35], 4, 0xabf9, &p->parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&p->sprites[36], 4, 0xac04, &p->parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&p->sprites[37], 4, 0xabff, &p->parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&p->sprites[38], 4, 0xac01, &p->parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&p->sprites[39], 4, 0xac01, &p->parameters, 0xb, 1.0f);
        uiSpriteStateInitFromSource(&p->sprites[40], 4, 0xabfe, &p->parameters, 0xb, 1.0f);
        p->unk19FC = style;
        p->unk19FB = 1;
        p->unk19FA = 1;
        uiSpriteSelectAnim(&p->sprites[37], 0xd);
        uiSpriteSelectAnim(&p->sprites[38], 0xe);
        uiSpriteSelectAnim(&p->sprites[40], 0x11);
        switch (p->unk19FC) {
        case 0:
            p->unk19F9 = 6;
            break;
        case 1:
            uiSpriteSelectAnim(&p->sprites[35], 0x13);
            uiSpriteSelectAnim(&p->sprites[36], 0x16);
            uiSpriteSelectAnim(&p->sprites[39], 0x19);
            p->unk19F9 = 1;
            break;
        case 2:
            uiSpriteSelectAnim(&p->sprites[35], 0x14);
            uiSpriteSelectAnim(&p->sprites[36], 0x17);
            uiSpriteSelectAnim(&p->sprites[39], 0x1a);
            p->unk19F9 = 1;
            break;
        default:
            uiSpriteSelectAnim(&p->sprites[35], 0x15);
            uiSpriteSelectAnim(&p->sprites[36], 0x18);
            uiSpriteSelectAnim(&p->sprites[39], 0x1b);
            p->unk19F9 = 1;
            break;
        }
    }
    return panel->unk19FA == 0;
}
}
