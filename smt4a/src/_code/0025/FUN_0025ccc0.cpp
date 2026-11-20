/* NON_MATCHING: retail reads the 0x5E2 flag through a second base (work+0x500) and keeps the first loop's call/else layout out of line; also needs uiSpriteGetCompletionState (ldrsb r0,[r0,#138]) in smt4a config/inlined.txt. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

extern ButtonHelpQueuedSelections g_buttonHelpQueuedKinds;

void FUN_0031879c(void);
void FUN_001a90e0(u8 *help);
void sysPlaySe(u32 id);
void buttonHelpSelectSlot(u32 index, s32 kind, s32 value, s32 queue);

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
u32 FUN_0025ccc0(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 last = 0;

    if (work->state != 0) {
        if (work->state == 1) {
            for (s32 i = 0; i < 4; i++) {
                UiSpriteState *unit = &work->panelSprites[i];
                if (work->mode != 1) {
                    uiSpriteAdvanceAnimation(unit, 1.0f);
                } else if (work->panelSliding != 0) {
                    uiSpriteSlideFromSide(unit, 0);
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
        } else if (work->state != 2) {
            if (work->state == 3) {
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
            }
        } else {
            FUN_0031879c();
        }
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
