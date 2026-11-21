/* NON_MATCHING: retail copies the button order from a .constdata block (DAT_004024f8+8) where this builds it from a pc-relative literal, the preset and the two records take other saved registers, and the panel-state tails materialise their constants separately. */
#include "ui/ButtonHelpGlobal.h"
#include "quest_center/qcMain.h"

struct ButtonHelpPresetRecord { u16 buttons[6]; u8 shown; };
extern "C" {
const ButtonHelpPresetRecord *dataTableGetEntry0e(u32 preset);
void buttonHelpSetContext(u32 preset);
void buttonHelpSetSlot(u8 slot, u8 kind, u8 value, s32 sound);
void FUN_001385f8();
void buttonHelpRebuildTouchRegions();

void buttonHelpSetPreset(u32 preset)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    if (work->preset == preset) {
        return;
    }
    if (g_buttonHelp.pending < 0) {
        for (s32 index = 0; index < 6; ++index) {
            if (work->touchPressed[index] != 0) {
                g_buttonHelp.pending = preset;
                return;
            }
        }
    }
    g_buttonHelp.pending = -1;
    buttonHelpSetContext(preset);
    const ButtonHelpPresetRecord *previous = dataTableGetEntry0e(work->preset);
    const ButtonHelpPresetRecord *next = dataTableGetEntry0e(preset);
    if (previous == NULL || next == NULL) {
        return;
    }
    work->previousPreset = work->preset;
    work->preset = preset;
    u8 buttonOrder[8] = { 5, 6, 4, 3, 2, 1, 0, 0 };
    for (s32 index = 0; index < 6; ++index) {
        u16 value = next->buttons[index];
        if (value != 0)
            buttonHelpSetSlot(static_cast<u8>(index), buttonOrder[index], static_cast<u8>(value), 0);
        else
            buttonHelpSetSlot(static_cast<u8>(index), 18, 81, 0);
    }
    if (previous->shown != 0) {
        if (next->shown != 0) {
            g_buttonHelp.work->panelState = 0;
            FUN_001385f8();
        } else {
            g_buttonHelp.work->panelState = 1;
            buttonHelpRebuildTouchRegions();
        }
    } else {
        g_buttonHelp.work->panelState = 1;
        FUN_001385f8();
    }
}
}
