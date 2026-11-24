/* NON_MATCHING: four lines. Retail forms both work+0x500 bases before the first store of the six-byte clear and schedules the halfword store after the touch-selection argument. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include <string.h>
#include "ui/UiSpriteState.h"

extern "C" {
u16 FUN_0019d890(u32 group, s32 sprite);
void FUN_001a90e0(void *pair);
} /* extern "C" */

/* Resets the help animations and rebuilds the touch regions for the six slots. */
extern "C" void buttonHelpRebuildTouchRegions(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        uiSpriteSelectAnim(&work->slotSprites[index], 0);
        u8 kind = work->slots[index].kind;
        if (kind != 0) {
            if (kind == 7 || kind == 19) {
                work->touchRegions[index] = FUN_0019d890(10, 0x73);
                ++work->touchCount;
            } else if (kind == 8) {
                work->touchRegions[index] = FUN_0019d890(10, 0x59);
                ++work->touchCount;
            } else if (kind == 9) {
                work->touchRegions[index] = FUN_0019d890(10, 0x85);
                ++work->touchCount;
            } else if (kind == 21 || kind == 20) {
                work->touchRegions[index] = FUN_0019d890(10, index + 0x1f);
                ++work->touchCount;
                work->touchRegions[index + 1] = FUN_0019d890(10, index + 0x20);
                ++work->touchCount;
            } else {
                work->touchRegions[index] = FUN_0019d890(10, index + 0x1f);
                ++work->touchCount;
            }
        }
    }
    memset(work->touchPressed, 0, sizeof(work->touchPressed));
    FUN_001a90e0(work->touchSelected);
    work->panelSliding = 0;
    ButtonHelpWorkA *current = g_buttonHelp.work;
    current->phase = 0;
    current->state = 1;
}
