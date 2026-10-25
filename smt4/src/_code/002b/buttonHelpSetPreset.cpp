/* NON_MATCHING: button-order constant storage, active-slot register allocation and transition-tail scheduling differ. */
#include "ui/ButtonHelp.h"
#include "quest_center/qcMain.h"

struct ButtonHelpPresetRecord { u16 buttons[6]; u8 shown; };
extern "C" {
extern ButtonHelpPresetGlobals g_buttonHelp;
const ButtonHelpPresetRecord *dataTableGetEntry0e(u32 preset);
void FUN_002b827c(u32 preset);
void FUN_002b8454(u8 slot, u8 kind, u8 value, s32 sound);
void FUN_001385f8();
void FUN_002ae5e0();

void buttonHelpSetPreset(u32 preset)
{
    ButtonHelpWork *work = g_buttonHelp.prefix.work;
    if (work->unk4C9 == preset) {
        return;
    }
    if (g_buttonHelp.pending < 0) {
        const ButtonHelpSelectionViewIV *selection = reinterpret_cast<const ButtonHelpSelectionViewIV *>(g_buttonHelp.prefix.work);
        for (s32 index = 0; index < 6; ++index) {
            if (selection->active[index] != 0) {
                g_buttonHelp.pending = preset;
                return;
            }
        }
    }
    g_buttonHelp.pending = -1;
    FUN_002b827c(preset);
    const ButtonHelpPresetRecord *previous = dataTableGetEntry0e(work->unk4C9);
    const ButtonHelpPresetRecord *next = dataTableGetEntry0e(preset);
    if (previous == NULL || next == NULL) {
        return;
    }
    work->unk04CA[0] = work->unk4C9;
    work->unk4C9 = preset;
    u8 buttonOrder[8] = { 5, 6, 4, 3, 2, 1, 0, 0 };
    for (s32 index = 0; index < 6; ++index) {
        u16 value = next->buttons[index];
        u8 kind = value != 0 ? buttonOrder[index] : 18;
        u8 label = value != 0 ? static_cast<u8>(value) : 81;
        FUN_002b8454(static_cast<u8>(index), kind, label, 0);
    }
    if (previous->shown != 0) {
        if (next->shown != 0) {
            g_buttonHelp.prefix.work->unk4C5 = 0;
            FUN_001385f8();
        } else {
            g_buttonHelp.prefix.work->unk4C5 = 1;
            FUN_002ae5e0();
        }
    } else {
        g_buttonHelp.prefix.work->unk4C5 = 1;
        FUN_001385f8();
    }
}
}
