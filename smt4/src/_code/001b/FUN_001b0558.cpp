#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

struct PartyHelpRecord {
    u8 kind;
    char text[0x53];
};

extern "C" {
s32 FUN_00282e70(void);
s32 FUN_00282ccc(void);
void updateEquippedWeaponHelp(RelativeDirectory *directory, u32 index);
void* dataTableGet(u32 id, u8 section);
PartyHelpRecord* dataTableGetEntries(void* table);
u32 dataTableGetCount(void* table);
void buttonHelpSetText(const char* text, u32 color);
StatBlock* partyMemberFindById(u32 id);
void FUN_0029dc74(u32 id, StatBlock* block);
void FUN_0029da34(u32 mode, u32 visible, u32 id, StatBlock* block);
}

static __inline const char* partyHelpText(u32 index)
{
    void* table = dataTableGet(0x39, 0);
    PartyHelpRecord* records = dataTableGetEntries(table);
    if (dataTableGetCount(table) > index)
        return records[index].text;
    return NULL;
}

// Refresh context help for the current party-menu mode or selected member.
extern "C" void FUN_001b0558(void)
{
    PartyPanelState* panel = g_partyPanel;
    s32 equippedWeapon = FUN_00282e70();
    s32 selection = FUN_00282ccc();
    if (equippedWeapon) {
        updateEquippedWeaponHelp(NULL, 0);
        return;
    }
    if (selection < 0) {
        if (panel->panelState == 12 || panel->panelState == 13) {
            buttonHelpSetText(partyHelpText(6), 0x323232FF);
        }
        if (panel->panelState == 14) {
            buttonHelpSetText(partyHelpText(7), 0x323232FF);
        }
        if (panel->panelState == 4) {
            buttonHelpSetText(partyHelpText(2), 0x323232FF);
        }
        if (panel->panelState == 15) {
            buttonHelpSetText(partyHelpText(8), 0x323232FF);
        }
        if (panel->panelState == 2) {
            buttonHelpSetText(partyHelpText(0), 0x323232FF);
        }
        if (panel->panelState == 3) {
            buttonHelpSetText(partyHelpText(1), 0x323232FF);
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
