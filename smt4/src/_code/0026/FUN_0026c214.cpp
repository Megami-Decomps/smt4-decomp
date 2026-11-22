/* NON_MATCHING: retail shares one buttonHelpSetPreset call across the leaves and places the help-pin tail after it (field 0x17F0 via a literal-pool offset); ours reaches the tail with an add-immediate pair and emits extra nop hints. */
#include "ui/ButtonHelp.h"
#include "ui/PartyPanelState.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

int FUN_00282ccc(void);
int partyPanelIsTransitionDone(void);
int FUN_0029dfa8(void);
int buttonHelpSetPreset(u32 preset);
int campCecIsActive(void);
int gameFlagIsSet(u32 flag);

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
    s32 a = partyPanelIsTransitionDone();
    s32 b = FUN_00282ccc();
    u32 preset;
    bool apply = true;

    if (a != 0) {
        if (plain) {
            if (panel->panelState != PARTY_MODE_DIALOG) {
                preset = panel->alternate != 0 ? 0x1E : 0x1D;
            } else {
                preset = panel->alternate != 0 ? 0xB8 : 0xB7;
            }
        } else if (panel->panelState == PARTY_MODE_FIELD && gameFlagIsSet(GAME_FLAG_PARTY_HELP_VARIANT) != 0) {
            preset = panel->alternate != 0 ? 0xBF : 0xBE;
        } else {
            preset = panel->alternate != 0 ? 0x1C : 0x1B;
        }
    } else if (b < 0) {
        if (plain) {
            if (panel->panelState != PARTY_MODE_DIALOG) {
                preset = panel->alternate != 0 ? 4 : 3;
            } else {
                preset = panel->alternate != 0 ? 0xBB : 0xBA;
            }
        } else if (panel->panelState == PARTY_MODE_FIELD && gameFlagIsSet(GAME_FLAG_PARTY_HELP_VARIANT) != 0) {
            preset = panel->alternate != 0 ? 0xC3 : 0xC2;
        } else {
            preset = panel->alternate != 0 ? 0x26 : 0x25;
        }
    } else if (plain) {
        if (panel->panelState != PARTY_MODE_DIALOG) {
            preset = panel->alternate != 0 ? 0x24 : 0x23;
        } else {
            preset = panel->alternate != 0 ? 0xB6 : 0xB5;
        }
    } else {
        if (panel->panelState != PARTY_MODE_FIELD) {
            preset = panel->alternate != 0 ? 0x22 : 0x21;
        } else {
            preset = panel->alternate != 0 ? 0xC1 : 0xC0;
        }
        buttonHelpSetPreset(preset);
        if (FUN_0029dfa8() != 0 && campCecIsActive() != 0) {
            preset = panel->alternate == 0 ? 0xE3 : 0xCC;
        } else {
            apply = false;
        }
    }
    if (apply) {
        buttonHelpSetPreset(preset);
    }
    if (panel->disabled != 0) {
        buttonHelpSetSlot(3, 0x12, 0, 1);
    } else if (buttonHelpGetEntryValue(3) == 0) {
        buttonHelpSetSlot(3, 3, 0xB, 1);
    }
}

} /* extern "C" */
