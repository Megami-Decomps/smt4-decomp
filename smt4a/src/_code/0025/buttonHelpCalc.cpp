/* NON_MATCHING: 14 lines: retail addresses the queued values from a second register (kinds + 24, the arrays are same-file data in the original) and branches around the queued loop where the build predicates its set-up; retail also computes the touchPressed/touchSelected base twice (r1 and r0) around the six-byte clear. */
#include "ui/ButtonHelp.h"
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

extern ButtonHelpQueuedSelections g_buttonHelpQueuedKinds;

void FUN_0031879c(void);
void FUN_001a90e0(u8 *help);
void sysPlaySe(u32 id);

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
s32 buttonHelpCalc(u32 job)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 last = 0;

    switch (work->state) {
    case 0:
        break;
    case 1:
        for (s32 i = 0; i < 4; i++) {
            if (work->mode == 1) {
                if (work->panelSliding != 0) {
                    uiSpriteSlideFromSide(&work->panelSprites[i], 0);
                }
            } else {
                uiSpriteAdvanceAnimation(&work->panelSprites[i], 1.0f);
            }
        }
        for (s32 i = 0; i < 6; i++) {
            if (work->slots[i].kind != 0) {
                if (i < work->phase) {
                    uiSpriteAdvanceAnimation(&work->slotSprites[i], 1.0f);
                }
                last = i;
            }
        }
        if (work->phase > last && uiSpriteGetCompletionState(&work->slotSprites[last]) != 0) {
            g_buttonHelp.work->state = 2;
            g_buttonHelp.work->phase = 0;
        }
        break;
    case 2:
        FUN_0031879c();
        break;
    case 3:
        for (s32 i = 0; i < 4; i++) {
            uiSpriteAdvanceAnimation(&work->panelSprites[i], 1.0f);
        }
        for (s32 i = 0; i < 6; i++) {
            if (work->slots[i].kind != 0) {
                if (i < work->phase) {
                    uiSpriteAdvanceAnimation(&work->slotSprites[i], 1.0f);
                }
                last = i;
            }
        }
        if (work->phase > last && uiSpriteGetCompletionState(&work->slotSprites[last]) != 0) {
            for (s32 i = 0; i < 6; i++) {
                work->touchPressed[i] = 0;
            }
            FUN_001a90e0(work->touchSelected);
            g_buttonHelp.work->state = 0;
            g_buttonHelp.work->phase = 0;
        }
        break;
    }
    if (g_buttonHelp.pending >= 0) {
        sysPlaySe(g_buttonHelp.pending & 0xffff);
        if (g_buttonHelp.pending < 0) {
            for (s32 i = 0; i < 6; i++) {
                if (g_buttonHelpQueuedKinds.kinds[i] >= 0) {
                    buttonHelpSelectSlot(i, g_buttonHelpQueuedKinds.kinds[i], g_buttonHelpQueuedKinds.values[i], 1);
                }
            }
        }
    }
    work->phase++;
    return 0;
}

}
