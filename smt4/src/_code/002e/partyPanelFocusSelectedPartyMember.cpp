#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

struct PartyPanelRosterEntry {
    s32 unit;
    u32 unk04;
};
/* The party panel seen as the selection fields this function reads (PartyPanelState's own unk2C is a u32). */
struct PartyPanelSelectionFields {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ s32 expanded;     /* page flag: 1 shows the second roster page */
    /* 0x030 */ u8 unk030[0x12];
    /* 0x042 */ u8 cursorOnly;    /* move only the alternate cursor */
    /* 0x043 */ u8 unk043[0x62D];
    /* 0x670 */ s32 partyIndex;
    /* 0x674 */ u8 unk674[0xc4];
    /* 0x738 */ PartyPanelRosterEntry roster[24];
    /* 0x7F8 */ u8 unk7f8[0x148];
    /* 0x940 */ ScrollSelectionOwner regular;
    ScrollSelectionOwner alternate;
};

extern "C" {
extern PartyPanelState *g_partyPanel;
u8 *gameGetSlotTable();
void timerStart(void *, s32, s32);
void FUN_0029378c(PartyPanelWidget *, u32);
void FUN_002937e0();
void scrollOwnerSelectIndex(ScrollSelectionOwner *, s32);
void FUN_0029eb5c(ScrollSelection *, s32);
}

/* Flips the page flag, plays animation 5 and refreshes every character and demon widget. */
static void partyPanelCollapse(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 i;

    panel->unk2C ^= 1;
    timerStart(panel->timerC, 5, 0);
    for (i = 0; i < 4; i++) {
        FUN_0029378c(panel->characters[i], panel->unk2C);
    }
    for (i = 0; i < 24; i++) {
        FUN_0029378c(panel->demons[i], panel->unk2C);
    }
    FUN_002937e0();
}

/* Flips the page flag, plays animation 4 and refreshes every character and demon widget. */
static void partyPanelExpand(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 i;

    panel->unk2C ^= 1;
    timerStart(panel->timerC, 4, 0);
    for (i = 0; i < 4; i++) {
        FUN_0029378c(panel->characters[i], panel->unk2C);
    }
    for (i = 0; i < 24; i++) {
        FUN_0029378c(panel->demons[i], panel->unk2C);
    }
    FUN_002937e0();
}

/* Moves the panel cursor onto the selected party member's roster slot, switching pages unless `force`
 * sets the page directly; returns 1 when the page was switched. */
extern "C" u32 partyPanelFocusSelectedPartyMember(s32 force)
{
    PartyPanelState *panel = g_partyPanel;
    PartyPanelSelectionFields *fields = reinterpret_cast<PartyPanelSelectionFields *>(panel);
    const s8 *table = reinterpret_cast<const s8 *>(gameGetSlotTable());
    u32 changed = 0;

    if (fields->partyIndex > 0) {
        s32 unit = table[0x9107 + fields->partyIndex];
        if (unit >= 0) {
            s32 i;
            for (i = 0; i < 24; i++) {
                s32 rosterUnit = fields->roster[i].unit;
                if (unit == rosterUnit) {
                    s32 state;
                    if (fields->cursorOnly != 0) {
                        scrollOwnerSelectIndex(&fields->alternate, i % 4);
                        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->alternate), i / 4);
                        break;
                    }
                    if (i < 12) {
                        if (force == 0) {
                            state = fields->expanded;
                        } else {
                            state = 0;
                            fields->expanded = 0;
                        }
                        if (force == 0 && state == 1) {
                            changed = 1;
                            partyPanelCollapse();
                        }
                        scrollOwnerSelectIndex(&fields->regular, i % 4);
                        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->regular), i / 4);
                        break;
                    }
                    if (force == 0) {
                        state = fields->expanded;
                    } else {
                        fields->expanded = 1;
                        state = fields->expanded;
                    }
                    if (force == 0) {
                        if (state == 0) {
                            changed = 1;
                            partyPanelExpand();
                        }
                    }
                    i -= 12;
                    scrollOwnerSelectIndex(&fields->regular, i % 4);
                    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->regular), i / 4);
                    break;
                }
            }
        }
    }
    return changed;
}
