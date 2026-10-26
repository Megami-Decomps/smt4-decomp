/* NON_MATCHING: ported from the matched smt4a twin FUN_00372570; two differences remain: the roster compare is `cmp r1, r0` (retail `cmp r0, r1`) and the zero stored for the forced page flag sits in r1 (retail reuses the state register r0) */
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

struct PartyPanelRosterEntry {
    s32 unit;
    u32 unk04;
};
struct PartyPanelSelectionFields {
    u8 unk000[0x670];
    s32 partyIndex;
    u8 unk674[0xc4];
    PartyPanelRosterEntry roster[24];
    u8 unk7f8[0x148];
    ScrollSelectionOwner regular;
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
                if (fields->roster[i].unit == unit) {
                    s32 state;
                    if (panel->unk42 != 0) {
                        scrollOwnerSelectIndex(&fields->alternate, i % 4);
                        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->alternate), i / 4);
                        break;
                    }
                    if (i < 12) {
                        if (force == 0) {
                            state = panel->unk2C;
                        } else {
                            state = 0;
                            panel->unk2C = state;
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
                        state = panel->unk2C;
                    } else {
                        panel->unk2C = 1;
                        state = panel->unk2C;
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
