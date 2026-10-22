/* NON_MATCHING: inline help-table lookup keeps NULL and text-color constants in different registers and shortens two tail-call setup sequences. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"

struct PartyHelpRecord {
    u8 kind;
    char text[0x53];
};

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 FUN_00282e70(void);
s32 FUN_00282ccc(void);
void updateEquippedWeaponHelp(u32 mode);
void* dataTableGet(u32 id, u8 section);
PartyHelpRecord* dataTableGetEntries(void* table);
u32 dataTableGetCount(void* table);
void FUN_0029ee6c(const char* text, u32 color);
StatBlock* partyMemberFindById(u32 id);
void FUN_0029dc74(u32 id, StatBlock* block);
void FUN_0029da34(u32 mode, u32 visible, u32 id, StatBlock* block);
}

static __inline const char* partyHelpText(u32 index)
{
    void* table = dataTableGet(0x39, 0);
    PartyHelpRecord* records = dataTableGetEntries(table);
    return dataTableGetCount(table) > index ? records[index].text : NULL;
}

// Refresh context help for the current party-menu mode or selected member.
extern "C" void FUN_001b0558(void)
{
    PartyPanelState* panel = g_partyPanel;
    s32 equippedWeapon = FUN_00282e70();
    s32 selection = FUN_00282ccc();
    if (equippedWeapon) {
        updateEquippedWeaponHelp(0);
        return;
    }
    if (selection < 0) {
        if (panel->panelState == 12 || panel->panelState == 13) {
            FUN_0029ee6c(partyHelpText(6), 0x323232FF);
        }
        if (panel->panelState == 14) {
            FUN_0029ee6c(partyHelpText(7), 0x323232FF);
        }
        if (panel->panelState == 4) {
            FUN_0029ee6c(partyHelpText(2), 0x323232FF);
        }
        if (panel->panelState == 15) {
            FUN_0029ee6c(partyHelpText(8), 0x323232FF);
        }
        if (panel->panelState == 2) {
            FUN_0029ee6c(partyHelpText(0), 0x323232FF);
        }
        if (panel->panelState == 3) {
            FUN_0029ee6c(partyHelpText(1), 0x323232FF);
        }
    } else {
        StatBlock fallback;
        StatBlock* member = partyMemberFindById(static_cast<u16>(selection));
        if (member == NULL) {
            FUN_0029dc74(static_cast<u16>(selection), &fallback);
            member = &fallback;
        }
        FUN_0029da34(0, 1, static_cast<u16>(selection), member);
    }
}
