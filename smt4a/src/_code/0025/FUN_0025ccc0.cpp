/* NON_MATCHING: retail reads the 0x5E2 flag through a second base (work+0x500) and keeps the first loop's call/else layout out of line; also needs recordGetSignedFlags (ldrsb r0,[r0,#138]) in smt4a config/inlined.txt. */
#include "ui/ButtonHelp.h"

extern "C" {

extern ButtonHelpPresetGlobalsA g_buttonHelp;
extern ButtonHelpQueuedSelections DAT_0057f0d8;

void FUN_00163aa4(ButtonHelpUnit *unit, f32 speed);
s8 recordGetSignedFlags(const ButtonHelpUnit *unit);
void FUN_00167458(ButtonHelpUnit *unit, s32 flag);
void FUN_0031879c(void);
void FUN_001a90e0(u8 *help);
void sysPlaySe(u32 id);
void FUN_00183f58(u32 index, s32 kind, s32 value, s32 queue);

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
u32 FUN_0025ccc0(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.prefix.work;
    s32 last = 0;

    if (work->state != 0) {
        if (work->state == 1) {
            for (s32 i = 0; i < 4; i++) {
                ButtonHelpUnit *unit = &work->selected[i];
                if (work->unk5E4 != 1) {
                    FUN_00163aa4(unit, 1.0f);
                } else if (work->unk5E2[0] != 0) {
                    FUN_00167458(unit, 0);
                }
            }
            for (s32 i = 0; i < 6; i++) {
                if (work->kinds[i].kind != 0) {
                    if (i < work->unk0C) {
                        FUN_00163aa4(&work->units[i], 1.0f);
                    }
                    last = i;
                }
            }
            if (work->unk0C > last && recordGetSignedFlags(&work->units[last]) != 0) {
                g_buttonHelp.prefix.work->state = 2;
                g_buttonHelp.prefix.work->unk0C = 0;
            }
        } else if (work->state != 2) {
            if (work->state == 3) {
                for (s32 i = 0; i < 4; i++) {
                    FUN_00163aa4(&work->selected[i], 1.0f);
                }
                for (s32 i = 0; i < 6; i++) {
                    if (work->kinds[i].kind != 0) {
                        if (i < work->unk0C) {
                            FUN_00163aa4(&work->units[i], 1.0f);
                        }
                        last = i;
                    }
                }
                if (work->unk0C > last && recordGetSignedFlags(&work->units[last]) != 0) {
                    for (s32 i = 0; i < 6; i++) {
                        work->clear.active[i] = 0;
                    }
                    FUN_001a90e0(work->clear.unk5DA);
                    g_buttonHelp.prefix.work->state = 0;
                    g_buttonHelp.prefix.work->unk0C = 0;
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
                if (DAT_0057f0d8.kinds[i] >= 0) {
                    FUN_00183f58(i, DAT_0057f0d8.kinds[i], DAT_0057f0d8.values[i], 1);
                }
            }
        }
    }
    work->unk0C++;
    return 0;
}

}
