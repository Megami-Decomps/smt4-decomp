/* NON_MATCHING: retail keeps the (group * 4 - 4) subtraction as a runtime add and the cell displacement 60; built folds -4 into the displacement (28). */
#include "common.h"

struct PartyPanelCell {
    u8 unk00[4];
    u16 value; // 0x04
    u8 unk06[2];
};

struct PartyPanel {
    u8 unk000[0x42];
    u8 wideMode;             // 0x042
    u8 unk043[0x635];
    u8 rowFlags[0xc0];       // 0x678
    PartyPanelCell cells[1]; // 0x738
};

extern "C" {

extern PartyPanel *g_partyPanel; /* 0x43dcf0 */

static __inline s32 partyPanelCellIndex(s32 group, s32 slot, s32 row)
{
    return row + (group * 4 - 4) + slot;
}

// True when the party panel has something at this slot: a row flag for group 0, else the cell's value.
u32 FUN_001a7d48(u32 unused, s32 slot, s32 group, s32 row)
{
    u32 result = 0;
    if (group != 0) {
        s32 base = g_partyPanel->wideMode == 0 ? row * 12 : 0;
        if (g_partyPanel->cells[base + partyPanelCellIndex(group, slot, 0)].value != 0) {
            result = 1;
        }
    } else if (g_partyPanel->rowFlags[slot] != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
