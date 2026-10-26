/* NON_MATCHING: common sysPlaySe block placement, conditional sound move order, and row-load scheduling differ. */
#include "common.h"
#include "code/Code002c.h"
#include "code/Code0037.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

/* The party panel as the cursor-sound code reads it. */
struct PartyPanelSounds {
    /* 0x0000 */ u8 unk0000[0x1C];
    /* 0x001C */ s32 screen;
    /* 0x0020 */ u8 unk0020[0x22];
    /* 0x0042 */ u8 secondColumn;
    /* 0x0043 */ u8 unk0043[0x971];
    /* 0x09B4 */ u8 page;
    /* 0x09B5 */ u8 unk09B5[0x85B];
    /* 0x1210 */ u8 holding;
    /* 0x1211 */ u8 unk1211[7];
    /* 0x1218 */ s32 row;
};

extern "C" {
extern PartyPanelSounds *g_partyPanel;

void sysPlaySe(u32 sound);
void FUN_00183f58(s32 a, s32 b, s32 c, s32 d);
s32 FUN_002cad18(void);
s32 partyPanelGetSelectedDemonId(void);
s8 FUN_0022e714(void);
s32 campCecHasObject(void);
s32 FUN_002f1964(void);
s32 gameFlagIsSet(u32 flag);

/* Plays the sound of the party panel's confirm / cancel / move input and updates the button help. */
void FUN_0023fc38(void)
{
    PartyPanelSounds *panel = g_partyPanel;
    FUN_002c7e24();
    u8 page = panel->page;
    bool subPage = true;
    if (page == 0 || page == 1 || page == 0xc || page == 0xd || page == 0xe) {
        subPage = false;
    }
    s32 confirmed = FUN_002cad18();
    s32 demonId = partyPanelGetSelectedDemonId();
    if (confirmed != 0) {
        if (subPage) {
            if (panel->page != 0x10) {
                sysPlaySe(panel->secondColumn == 0 ? 0x1d : 0x1e);
            } else {
                sysPlaySe(panel->secondColumn == 0 ? 0xb9 : 0xba);
            }
        } else if (panel->page == 0xc && gameFlagIsSet(0x401) != 0) {
            sysPlaySe(panel->secondColumn == 0 ? 0xc0 : 0xc1);
        } else {
            s32 row = panel->row;
            if (panel->secondColumn != 0) {
                if (row == 0) {
                    sysPlaySe(0x1c);
                } else if (row == 1) {
                    sysPlaySe(0x28);
                }
            } else if (row == 0) {
                sysPlaySe(0x1b);
            } else if (row == 1) {
                sysPlaySe(0x27);
            }
        }
    } else if (demonId < 0) {
        u32 sound;
        if (subPage) {
            if (panel->page != 0x10) {
                sound = panel->secondColumn == 0 ? 0x25 : 0x26;
            } else {
                sound = panel->secondColumn == 0 ? 0xbc : 0xbd;
            }
        } else if (panel->page == 0xc && gameFlagIsSet(0x401) != 0) {
            sound = panel->secondColumn == 0 ? 0xc4 : 0xc5;
        } else if (panel->secondColumn != 0) {
            sound = 0x26;
        } else {
            sound = 0x25;
        }
        sysPlaySe(sound);
    } else if (subPage) {
        if (panel->screen != 0x19 || FUN_002f1964() == 0) {
            sysPlaySe(panel->secondColumn == 0 ? 0x23 : 0x24);
        }
    } else {
        if (panel->page != 0xc) {
            s32 row = panel->row;
            if (panel->secondColumn != 0) {
                if (row == 0) {
                    sysPlaySe(0x22);
                } else if (row == 1) {
                    sysPlaySe(0x28);
                }
            } else if (row == 0) {
                sysPlaySe(0x21);
            } else if (row == 1) {
                sysPlaySe(0x27);
            }
        } else {
            sysPlaySe(panel->secondColumn == 0 ? 0xc2 : 0xc3);
        }
        if (FUN_0022e714() != 0 && campCecHasObject() != 0) {
            sysPlaySe(panel->secondColumn == 0 ? 0xe5 : 0xce);
        }
    }
    if (panel->holding != 0) {
        FUN_00183f58(3, 0x12, 0, 1);
        return;
    }
    if (buttonHelpGetEntryValue(3) != 0) {
        return;
    }
    FUN_00183f58(3, 3, 0xb, 1);
}
}
