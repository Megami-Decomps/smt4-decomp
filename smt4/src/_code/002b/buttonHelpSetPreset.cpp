/* NON_MATCHING: button-order constant storage, active-slot register allocation and transition-tail scheduling differ. */
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
        const ButtonHelpWork *current = g_buttonHelp.work;
        for (s32 index = 0; index < 6; ++index) {
            if (current->touchPressed[index] != 0) {
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
        u8 kind = value != 0 ? buttonOrder[index] : 18;
        u8 label = value != 0 ? static_cast<u8>(value) : 81;
        buttonHelpSetSlot(static_cast<u8>(index), kind, label, 0);
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
