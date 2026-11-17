/* NON_MATCHING: only the halfword clear at 0x4BC differs: retail addresses it from work + 0x400 (shared with the 0x4BE argument), the build pools the 0x4BC offset. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include <string.h>

extern "C" {

u16 FUN_002aa024(s32 table, s32 id);
void FUN_002ae028(void *value);

/* Resets the button help: clears its six sprites and looks up the label text of each button kind. */
void FUN_001385f8(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;

    for (s32 i = 0; i < 6; i++) {
        spriteStartAnimationByIndex(&work->slotSprites[i], 0);
        switch (work->slots[i].kind) {
        case 0:
            break;
        case 7:
            work->touchRegions[i] = FUN_002aa024(0x12, 0x73);
            break;
        case 8:
            work->touchRegions[i] = FUN_002aa024(0x12, 0x59);
            break;
        case 9:
            work->touchRegions[i] = FUN_002aa024(0x12, 0x85);
            break;
        default:
            work->touchRegions[i] = FUN_002aa024(0x12, i + 0x1F);
            break;
        }
    }
    memset(work->touchPressed, 0, sizeof(work->touchPressed));
    FUN_002ae028(work->touchSelected);
    work->panelSliding = 0;
    g_buttonHelp.work->phase = 0;
    g_buttonHelp.work->state = 1;
}

} /* extern "C" */
