/* NON_MATCHING: retail hoists `work + 0x400` for the 0x4C6 flag read and lays the mode == 1 branch of the first loop out of line; ours keeps both inline (flag read directly through work) */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

extern ButtonHelpQueuedSelections DAT_0043da50;

void FUN_00220984(void);
void FUN_002ae028(u8 *help);
void FUN_002b8454(u8 slot, u8 kind, u16 value, s32 defer);
void buttonHelpSetPreset(u32 preset);

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
u32 FUN_001c0c38(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    s32 last = 0;

    if (work->state != 0) {
        if (work->state == 1) {
            for (s32 i = 0; i < 2; i++) {
                if (work->mode != 1) {
                    uiSpriteAdvanceAnimation(&work->panelSprites[i]);
                } else if (work->panelSliding != 0) {
                    uiSlidingSpriteAdvance(&work->panelSprites[i], 0);
                }
            }
            for (s32 i = 0; i < 6; i++) {
                if (work->slots[i].kind != 0) {
                    if (i < work->phase) {
                        uiSpriteAdvanceAnimation(&work->slotSprites[i]);
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
                for (s32 i = 0; i < 2; i++) {
                    uiSpriteAdvanceAnimation(&work->panelSprites[i]);
                }
                for (s32 i = 0; i < 6; i++) {
                    if (work->slots[i].kind != 0) {
                        if (i < work->phase) {
                            uiSpriteAdvanceAnimation(&work->slotSprites[i]);
                        }
                        last = i;
                    }
                }
                if (work->phase > last && uiSpriteGetCompletionState(&work->slotSprites[last]) != 0) {
                    for (s32 i = 0; i < 6; i++) {
                        work->touchPressed[i] = 0;
                    }
                    FUN_002ae028(work->touchSelected);
                    g_buttonHelp.work->state = 0;
                    g_buttonHelp.work->phase = 0;
                }
            }
        } else {
            FUN_00220984();
        }
    }
    if (g_buttonHelp.pending >= 0) {
        buttonHelpSetPreset(g_buttonHelp.pending & 0xff);
        if (g_buttonHelp.pending < 0) {
            for (s32 i = 0; i < 6; i++) {
                if (DAT_0043da50.kinds[i] >= 0) {
                    FUN_002b8454(i, DAT_0043da50.kinds[i], DAT_0043da50.values[i], 1);
                }
            }
        }
    }
    work->phase++;
    return 0;
}

}
