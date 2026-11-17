/* NON_MATCHING: Glyph-case tail layout, work/index saved registers, timer argument scheduling and the selected-field address differ. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include <string.h>

extern "C" {
u16 FUN_002aa024(s32 resource, s32 glyph);
void FUN_002a9fdc(UiSpriteState *unit, s32 value);
void FUN_002ae028(void *animation);

void FUN_002ae5e0(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        spriteStartAnimationByIndex(&work->slotSprites[index], 0);
        u8 kind = work->slots[index].kind;
        if (kind == 0) {
            continue;
        }
        if (kind == 7) {
            work->touchRegions[index] = FUN_002aa024(0x12, 0x73);
        } else if (kind == 8) {
            work->touchRegions[index] = FUN_002aa024(0x12, 0x59);
        } else if (kind == 9) {
            work->touchRegions[index] = FUN_002aa024(0x12, 0x85);
        } else if ((kind == 10 || kind == 11) || (kind == 12 || kind == 13) ||
                   (kind == 14 || kind == 15 || kind == 16)) {
            switch (index) {
            case 0:
            case 1:
                work->touchRegions[index] = FUN_002aa024(0x12, 0x73);
                break;
            case 2:
            case 3:
                work->touchRegions[index] = FUN_002aa024(0x12, 0x85);
                break;
            case 4:
            case 5:
                work->touchRegions[index] = FUN_002aa024(0x12, 0x8C);
                break;
            }
        } else {
            work->touchRegions[index] = FUN_002aa024(0x12, index + 0x1F);
        }
    }
    for (s32 index = 0; index < 2; ++index) {
        if (work->mode == 1) {
            timerStart(&work->panelSprites[index], 2, 0);
        } else {
            FUN_002a9fdc(&work->panelSprites[index], 0);
        }
    }
    memset(work->touchPressed, 0, sizeof(work->touchPressed));
    FUN_002ae028(work->touchSelected);
    work->panelSliding = 1;
    work = g_buttonHelp.work;
    work->phase = 0;
    work->state = 1;
}
}
