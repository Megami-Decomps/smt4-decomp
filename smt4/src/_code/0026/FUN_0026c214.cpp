/* NON_MATCHING: retail shares one buttonHelpSetPreset call across the leaves and places the help-pin tail after it (field 0x17F0 via a literal-pool offset); ours reaches the tail with an add-immediate pair and emits extra nop hints. */
#include "ui/PartyPanelState.h"
#include "shard/FUN_0029acb0.h"

extern "C" {

int FUN_00282ccc(void);
int FUN_00282e70(void);
int FUN_0029dfa8(void);
int FUN_002b8454(s32, s32, s32, s32);
int buttonHelpSetPreset(u32 preset);
int buttonHelpGetEntryValue(u32 entry);
int campCecIsActive(void);
int gameFlagIsSet(u32 flag);

extern PartyPanelState *g_partyPanel;

#define PARTY_MODE_FIELD 0xC
#define PARTY_MODE_DIALOG 0x10
#define GAME_FLAG_PARTY_HELP_VARIANT 0x401

/* Chooses the button-help preset for the party panel from its mode and which side the cursor is
 * on, then keeps the help window entry in the matching state. */
void FUN_0026c214(void)
{
    PartyPanelState *panel = g_partyPanel;
    FUN_0029acb0();
    u8 mode = panel->panelState;
    bool plain = true;
    if (mode == 0 || mode == 1 || mode == 0xC || mode == 0xD || mode == 0xE) {
        plain = false;
    }
    s32 a = FUN_00282e70();
    s32 b = FUN_00282ccc();
    u32 preset;

    if (a != 0) {
        if (plain) {
            if (panel->panelState != PARTY_MODE_DIALOG) {
                preset = panel->unk42 != 0 ? 0x1E : 0x1D;
            } else {
                preset = panel->unk42 != 0 ? 0xB8 : 0xB7;
            }
        } else if (panel->panelState == PARTY_MODE_FIELD && gameFlagIsSet(GAME_FLAG_PARTY_HELP_VARIANT) != 0) {
            preset = panel->unk42 != 0 ? 0xBF : 0xBE;
        } else {
            preset = panel->unk42 != 0 ? 0x1C : 0x1B;
        }
        buttonHelpSetPreset(preset);
    } else if (b < 0) {
        if (plain) {
            if (panel->panelState != PARTY_MODE_DIALOG) {
                preset = panel->unk42 != 0 ? 4 : 3;
            } else {
                preset = panel->unk42 != 0 ? 0xBB : 0xBA;
            }
        } else if (panel->panelState == PARTY_MODE_FIELD && gameFlagIsSet(GAME_FLAG_PARTY_HELP_VARIANT) != 0) {
            preset = panel->unk42 != 0 ? 0xC3 : 0xC2;
        } else {
            preset = panel->unk42 != 0 ? 0x26 : 0x25;
        }
        buttonHelpSetPreset(preset);
    } else if (plain) {
        if (panel->panelState != PARTY_MODE_DIALOG) {
            preset = panel->unk42 != 0 ? 0x24 : 0x23;
        } else {
            preset = panel->unk42 != 0 ? 0xB6 : 0xB5;
        }
        buttonHelpSetPreset(preset);
    } else {
        if (panel->panelState != PARTY_MODE_FIELD) {
            preset = panel->unk42 != 0 ? 0x22 : 0x21;
        } else {
            preset = panel->unk42 != 0 ? 0xC1 : 0xC0;
        }
        buttonHelpSetPreset(preset);
        if (FUN_0029dfa8() != 0 && campCecIsActive() != 0) {
            buttonHelpSetPreset(panel->unk42 == 0 ? 0xE3 : 0xCC);
        }
    }
    if (panel->unk17F0 != 0) {
        FUN_002b8454(3, 0x12, 0, 1);
        return;
    }
    if (buttonHelpGetEntryValue(3) != 0) {
        return;
    }
    FUN_002b8454(3, 3, 0xB, 1);
}

} /* extern "C" */
