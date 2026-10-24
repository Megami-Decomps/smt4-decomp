/* NON_MATCHING: only the order of the cell-index additions and one register differ (retail adds slot into the (group*4-4) term before the row base). */
#include "common.h"

struct PartyPanelCell {
    u8 unk00[4];
    u16 value; // 0x04
    u8 unk06[2];
};

struct PartyPanel {
    u8 unk000[0x42];
    u8 wideMode;             // 0x042
    u8 unk043[2429];
    u8 rowFlags[192];       // 0x9c0
    PartyPanelCell cells[1]; // 0xa80
};

extern "C" {

extern PartyPanel *g_partyPanel;

u32 FUN_002304d0(u32 unused, s32 slot, s32 group, s32 row)
{
    u32 result = 0;
    if (group != 0) {
        s32 first = (group - 1) * 4;
        s32 base = g_partyPanel->wideMode == 0 ? row * 12 : 0;
        if (g_partyPanel->cells[first + slot + base].value != 0) {
            result = 1;
        }
    } else if (g_partyPanel->rowFlags[slot] != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
