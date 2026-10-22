/* NON_MATCHING: roster-loop peeling/base hoisting, early-result setup and return-block duplication differ; an optimization flag may explain them. */
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

struct PartyPanelRosterEntry {
    s32 unit;
    u32 unk04;
};
struct PartyPanelSelectionFields {
    u8 unk000[0x670];
    s32 partyIndex;
    u8 unk674[0x2cc];
    ScrollSelectionOwner regular;
    ScrollSelectionOwner alternate;
};

extern "C" {
extern PartyPanelState *g_partyPanel;
u8 *gameGetSlotTable();
void timerStart(void *, s32, s32);
void FUN_0029378c(PartyPanelWidget *, u32);
void FUN_002937e0();
void FUN_0029e8b8(ScrollSelectionOwner *, s32);
void FUN_0029eb5c(ScrollSelection *, s32);
}

static __inline void partyPanelAnimatePage(PartyPanelState *panel, s32 animation)
{
    panel->unk2C ^= 1;
    timerStart(panel->timerC, animation, 0);
    for (s32 i = 0; i < 4; ++i)
        FUN_0029378c(panel->characters[i], panel->unk2C);
    for (s32 i = 0; i < 24; ++i)
        FUN_0029378c(panel->demons[i], panel->unk2C);
    FUN_002937e0();
}

extern "C" u32 partyPanelFocusSelectedPartyMember(s32 force)
{
    PartyPanelState *panel = g_partyPanel;
    PartyPanelSelectionFields *fields = reinterpret_cast<PartyPanelSelectionFields *>(panel);
    u8 *party = gameGetSlotTable();
    if (fields->partyIndex <= 0)
        return 0;
    s32 unit = reinterpret_cast<const s8 *>(party)[0x9107 + fields->partyIndex];
    if (unit < 0)
        return 0;
    const PartyPanelRosterEntry *roster =
        reinterpret_cast<const PartyPanelRosterEntry *>(&panel->entryView.unk738);
    s32 slot = 0;
    while (roster[slot].unit != unit) {
        ++slot;
        if (slot >= 24)
            return 0;
    }
    if (panel->unk42) {
        FUN_0029e8b8(&fields->alternate, slot % 4);
        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->alternate), slot / 4);
        return 0;
    }
    u32 changed = 0;
    if (slot < 12) {
        if (force)
            panel->unk2C = 0;
        else if (panel->unk2C == 1) {
            changed = 1;
            partyPanelAnimatePage(g_partyPanel, 5);
        }
        FUN_0029e8b8(&fields->regular, slot % 4);
        FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->regular), slot / 4);
        return changed;
    }
    if (force)
        panel->unk2C = 1;
    else if (panel->unk2C == 0) {
        changed = 1;
        partyPanelAnimatePage(g_partyPanel, 4);
    }
    slot -= 12;
    FUN_0029e8b8(&fields->regular, slot % 4);
    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&fields->regular), slot / 4);
    return changed;
}
