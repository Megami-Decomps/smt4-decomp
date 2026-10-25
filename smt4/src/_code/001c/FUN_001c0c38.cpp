/* NON_MATCHING: retail hoists `work + 0x400` for the 0x4C6 flag read and lays the mode == 1 branch of the first loop out of line; ours keeps both inline (flag read directly through work) */
#include "ui/ButtonHelp.h"

extern "C" {

extern ButtonHelpPresetGlobals g_buttonHelp;
extern ButtonHelpQueuedSelections DAT_0043da50;

void FUN_00220984(void);
void FUN_002ae028(u8 *help);
void FUN_002b8454(u8 slot, u8 kind, u16 value, s32 defer);
void FUN_002b8ee0(ButtonHelpDisplayUnit *unit, s32 flag);
void FUN_002bf818(ButtonHelpDisplayUnit *unit);
void buttonHelpSetPreset(u32 preset);
s8 uiSpriteGetCompletionState(const ButtonHelpDisplayUnit *record);

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
u32 FUN_001c0c38(void)
{
    ButtonHelpWork *work = g_buttonHelp.prefix.work;
    ButtonHelpSelectionViewIV *selection = reinterpret_cast<ButtonHelpSelectionViewIV *>(work);
    s32 last = 0;

    if (work->state != 0) {
        if (work->state == 1) {
            for (s32 i = 0; i < 2; i++) {
                if (work->mode != 1) {
                    FUN_002bf818(&work->units[i]);
                } else if (work->unk04C6[0] != 0) {
                    FUN_002b8ee0(&work->units[i], 0);
                }
            }
            for (s32 i = 0; i < 6; i++) {
                if (selection->kinds[i].kind != 0) {
                    if (i < work->transition.phase) {
                        FUN_002bf818(&selection->units[i]);
                    }
                    last = i;
                }
            }
            if (work->transition.phase > last && uiSpriteGetCompletionState(&selection->units[last]) != 0) {
                g_buttonHelp.prefix.work->state = 2;
                g_buttonHelp.prefix.work->transition.phase = 0;
            }
        } else if (work->state != 2) {
            if (work->state == 3) {
                for (s32 i = 0; i < 2; i++) {
                    FUN_002bf818(&work->units[i]);
                }
                for (s32 i = 0; i < 6; i++) {
                    if (selection->kinds[i].kind != 0) {
                        if (i < work->transition.phase) {
                            FUN_002bf818(&selection->units[i]);
                        }
                        last = i;
                    }
                }
                if (work->transition.phase > last && uiSpriteGetCompletionState(&selection->units[last]) != 0) {
                    for (s32 i = 0; i < 6; i++) {
                        selection->active[i] = 0;
                    }
                    FUN_002ae028(selection->unk4BE);
                    g_buttonHelp.prefix.work->state = 0;
                    g_buttonHelp.prefix.work->transition.phase = 0;
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
    work->transition.phase++;
    return 0;
}

}
